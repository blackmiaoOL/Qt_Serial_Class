#include "mqserial.h"

#include "ui_mainwindow.h"
#include "QTextCodec"
#include <QtCore/QSettings>
#include <stdlib.h>
#include <stdio.h>
#include <QDialog>
#include <QFileDialog>
#include <fstream>
#include <stdlib.h>
#include "QPlainTextEdit"
#include "ui_mqserial.h"


bool ishex(char);
MQSerial::MQSerial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MQSerial)
{

    ui->setupUi(this);

    open_button_state=false;
    receivenum =0;
    sendnum=0;

    prm_table[0]=19;
    prm_table[1]=3;
    prm_table[2]=0;
    prm_table[3]=0;

    ui->pushButton_3->setEnabled(false);
    ui->pushButton_2->setEnabled(false);


    myCom = new Posix_QextSerialPort("/dev/ttyS0");
//    myCom = new Win_QextSerialPort("\\\\.\\com11", QextSerialBase::EventDriven);
    connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));

    readTimer = new QTimer(this);
    readTimer->start(100);
    //设置延时为100ms
    connect(readTimer,SIGNAL(timeout()),this,SLOT(readMyCom()));
  //  for(int i=0;comm.getcomm(i,"value")!="nokey"&&comm.getcomm(i,"value")!="Cannot open regedit!";i++)
  //  {
   //   ui->comboBox->addItem(comm.getcomm(i,"value"));
   // }



}

MQSerial::~MQSerial()
{
    delete ui;
}
void MQSerial::readMyCom()
{
    if(myCom->bytesAvailable() > 0){
        QByteArray temp = myCom->readAll();
        receivenum+=temp.size();

        QString delta2;
        delta2=QString("%1").arg(receivenum);
        ui->lineEdit_3->setText(delta2);


        if(!ui->checkBox->isChecked())
        {
            alltext.append(temp);
            int sizesize=temp.size();
            QString ss=temp.toHex();
            for(long i=0;i<sizesize;i++)
                ss.insert(3*i," ");


            if(ui->checkBox_2->isChecked())
                ui->plainTextEdit->insertPlainText(ss);
            else
                ui->plainTextEdit->insertPlainText(temp);

           ui->plainTextEdit->moveCursor(QTextCursor::End);
        }
    }
}



void MQSerial::on_pushButton_4_clicked()
{
    if(open_button_state)
    {
        if(myCom->isOpen())
        {
            myCom->close();/*may occur "WaitCommEvent error 22".
 I don't know how to solve.*/
            ui->pushButton_4->setText("Open");
            ui->pushButton_3->setEnabled(false);
            ui->pushButton_2->setEnabled(false);
            ui->pushButton_8->setEnabled(false);
            open_button_state=!open_button_state;
        }
    }
    else
    {
        ui->pushButton_8->setEnabled(true);
        QString ss;
        ss.append(ui->lineEdit_5->text());
            qDebug()<<ss;
        myCom->setPortName(ss);
        if(myCom ->open(QIODevice::ReadWrite))
        {
            ui->pushButton_4->setText("Close");
            ui->pushButton_3->setEnabled(true);
            ui->pushButton_2->setEnabled(true);
            myCom->setBaudRate((BaudRateType)prm_table[0]);
            myCom->setDataBits((DataBitsType)prm_table[1]);
            myCom->setParity((ParityType)prm_table[2]);
            myCom->setStopBits((StopBitsType)prm_table[3]);
            myCom->setTimeout(0,10);
            open_button_state=!open_button_state;
        }


    }
}

void MQSerial::on_pushButton_3_clicked()
{
    if(!ui->checkBox_3->isChecked())
    {
        if(ui->checkBox_10->isChecked())
        {
            myCom->write(ui->lineEdit->text().toLatin1().append("\n"));
            sendnum+=ui->lineEdit->text().toLatin1().size()+1;
        }
        else
        {
            myCom->write(ui->lineEdit->text().toLatin1());
            sendnum+=ui->lineEdit->text().toLatin1().size();
        }
    }
    else
    {
        QByteArray fasonghex=ui->lineEdit->text().toLatin1();
        QString fasongzhi;
        int indexjishu=0;
        QString fasongxinxi;
        while(1)
        {


            if(indexjishu+1>=fasonghex.size())
                break;
            {

                char a[3];
                if(ishex(fasonghex[indexjishu]))
                a[0]=fasonghex[indexjishu];
                else
                {
                    QString aa=tr("ŐâĘÇHEXˇ˘ËÍĹśÇ×ŁŹÄúĘäČë´íż� ");


                break;
                }
                if(ishex(fasonghex[indexjishu+1]))
                a[1]=fasonghex[indexjishu+1];
                else
                {
                    QString aa=tr("ŐâĘÇHEXˇ˘ËÍĹśÇ×ŁŹÄúĘäČë´íż� ");
                    //cuowutishi->ui->label->setText(aa);
                    //cuowutishi->show();
                break;
                }
                a[2]='\0';
                QByteArray text = QByteArray::fromHex(a);
                fasongxinxi.append(text.data());


                if(fasonghex[indexjishu+2]==' ')
                indexjishu+=3;
                else
                indexjishu+=2;


            }
        }
        if(ui->checkBox_10->isChecked())
        {
            myCom->write(fasongxinxi.insert(0,"\n").toLatin1());
            sendnum+=indexjishu/3+1+1;
        }
        else
        {
            myCom->write(fasongxinxi.toLatin1());
            sendnum+=indexjishu/3+1;
        }

    }
    QString delta3;
    delta3=QString("%1").arg(sendnum);
    ui->lineEdit_2->setText(delta3);

}

void MQSerial::on_comboBox_2_activated(int a)
{
    myCom->setBaudRate((BaudRateType)a);
    prm_table[0]=a;
}

void MQSerial::on_comboBox_3_activated(int index)
{
    myCom->setDataBits((DataBitsType)index);
    prm_table[1]=index;
}

void MQSerial::on_comboBox_5_activated(int index)
{
    myCom->setParity((ParityType)index);
    prm_table[2]=index;
}

void MQSerial::on_comboBox_4_activated(int index)
{
    myCom->setStopBits((StopBitsType)index );
    prm_table[3]=index;
}

void MQSerial::on_lineEdit_editingFinished()
{
   // myCom->write(ui->lineEdit->text().toAscii());
}

void MQSerial::on_lineEdit_textChanged(const QString &arg1)
{
    QString aa=arg1;
    if(ui->lineEdit->text().size()==0)
        ui->pushButton_3->setEnabled(false);
    else
        ui->pushButton_3->setEnabled(true);

}
bool MQSerial::ishex(char a)
{
    if((a>='a'&&a<='f')||(a>='A'&&a<='F')||((a>='0')&&(a<='9')))
        return true;
    else return false;
}

void MQSerial::on_pushButton_8_clicked()
{


}

void MQSerial::on_pushButton_6_clicked()
{
    ui->plainTextEdit->moveCursor(QTextCursor::Start);
}

void MQSerial::on_pushButton_5_clicked()
{
    ui->plainTextEdit->clear();
    alltext.clear();
    receivenum=0;
    sendnum=0;
}

void MQSerial::on_checkBox_2_stateChanged(int arg1)
{
        //ŃĄÖĐÎŞ2
    ui->plainTextEdit->clear();
    int textsize=alltext.toLatin1().size();
    QString zhongjie=alltext.toLatin1().toHex();
    for(long i=0;i<textsize;i++)
        zhongjie.insert(3*i," ");
    if(arg1==2)
    ui->plainTextEdit->appendPlainText(zhongjie);
    else
        ui->plainTextEdit->appendPlainText(alltext);
    this->isAnimated();
}


void MQSerial::on_checkBox_7_clicked()
{

}


void MQSerial::on_pushButton_2_clicked()
{
    QString path = QFileDialog::getOpenFileName(this, tr(""), ".", tr("all Files(*.*)"));
          if(path.length() == 0) {
                  QMessageBox::information(NULL, tr(""), tr(""));
          } else {
                  QMessageBox::information(NULL, tr(""), tr("~") + path);
          }
          QFile aa(path);
          if( aa.open(QIODevice::ReadOnly))
          {
         //   QTextStream textStream(&aa);
           // while(!textStream.atEnd())
           // {
             ui->plainTextEdit->appendPlainText(aa.readAll().toHex());
             if(!ui->checkBox_3->isChecked())
             {
                 QByteArray fasonghex=aa.readAll();

                 if(ui->checkBox_10->isChecked())
                 {
                     myCom->write(aa.readAll().append("\n"));

                 }
                 else
                 {
                     myCom->write(aa.readAll());

                 }
             }
             else
             {
                 QByteArray fasonghex=aa.read(1000000000);

                 QString fasongzhi;
                 int indexjishu=0;
                 QString fasongxinxi;
                 while(1)
                 {


                     if(indexjishu+1>=fasonghex.size())
                         break;
                     {

                         char a[3];
                         if(ishex(fasonghex[indexjishu]))
                         a[0]=fasonghex[indexjishu];
                         else
                         {
                             QString aa=tr(" ");
                             //cuowutishi->ui->label->setText(aa);
                             //cuowutishi->show();

                         break;
                         }
                         if(ishex(fasonghex[indexjishu+1]))
                         a[1]=fasonghex[indexjishu+1];
                         else
                         {
                             QString aa=tr(" ");
                             //cuowutishi->ui->label->setText(aa);
                             //cuowutishi->show();
                         break;
                         }
                         a[2]='\0';
                         QByteArray text = QByteArray::fromHex(a);
                         fasongxinxi.append(text.data());


                         if(fasonghex[indexjishu+2]==' ')
                         indexjishu+=3;
                         else
                         indexjishu+=2;


                     }
                 }
                 if(ui->checkBox_10->isChecked())
                 {
                     myCom->write(fasongxinxi.insert(0,"\n").toLatin1());

                 }
                 else
                 {
                     myCom->write(fasongxinxi.toLatin1());

                 }

             }

           // }

          }
        QString delta;
        sendnum+=ui->plainTextEdit->textCursor().position()/2;
        delta=QString("%1").arg(sendnum);
        ui->lineEdit_2->setText(delta);

          aa.close();

}

void MQSerial::on_pushButton_clicked()
{
    QString path = QFileDialog::getSaveFileName(this, tr(""), ".", tr("all Files(*.*)"));
          if(path.length() == 0) {
                  QMessageBox::information(NULL, tr(""), tr(""));
          } else {
                  QMessageBox::information(NULL, tr(""), tr("~") + path);
          }
          QFile bb(path);
          if(bb.open(QIODevice::WriteOnly))
          {
            bb.write(ui->plainTextEdit->toPlainText().toLatin1());
          }
          bb.close();

}




