#ifndef MQSERIAL_H
#define MQSERIAL_H


#define _TTY_POSIX_
#include "qextserialport/posix_qextserialport.h"
#define QextBaseType Posix_QextSerialPort




#include <QMessageBox>
#include <QMainWindow>
#include "QLabel"
#include "QPlainTextEdit"
#include <QtNetwork/qtcpserver.h>
#include <QtNetwork/qtcpsocket.h>
#include <QLabel>
#include <QPushButton>
#include <QDebug>
#include "QList"
#include <QLineEdit>
#include <QSlider>
#include <QSignalMapper>
#include <QStringListModel>
#include <QSettings>
#include <QTimer>






namespace Ui {
class MQSerial;
}

class MQSerial : public QMainWindow
{
    Q_OBJECT

public:

     bool open_button_state;
    explicit MQSerial(QWidget *parent = 0);
    ~MQSerial();
public slots:
    void readMyCom();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



    void on_comboBox_2_activated(int);



    void on_comboBox_3_activated(int index);

    void on_comboBox_5_activated(int index);



    void on_comboBox_4_activated(int index);

    void on_lineEdit_editingFinished();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_7_clicked();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Posix_QextSerialPort *myCom;
    QTimer *readTimer;

    Ui::MQSerial *ui;
    int prm_table[4];
    //QextSerialEnumerator enumerator;
    long receivenum;
    //Readcom comm;
    QString alltext;
    int sendnum;
    QLabel* btm_state;
    bool ishex(char a);
};

#endif // MQSERIAL_H
