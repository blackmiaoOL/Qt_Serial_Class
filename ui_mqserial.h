/********************************************************************************
** Form generated from reading UI file 'mqserial.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQSERIAL_H
#define UI_MQSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MQSerial
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_14;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QComboBox *comboBox_5;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox;
    QCheckBox *checkBox_6;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_10;
    QFrame *line_2;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MQSerial)
    {
        if (MQSerial->objectName().isEmpty())
            MQSerial->setObjectName(QStringLiteral("MQSerial"));
        MQSerial->resize(741, 476);
        QPalette palette;
        QBrush brush(QColor(198, 198, 198, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(229, 229, 229, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        MQSerial->setPalette(palette);
        centralwidget = new QWidget(MQSerial);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_14->addWidget(textBrowser);


        verticalLayout_8->addLayout(verticalLayout_14);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setEditable(false);

        horizontalLayout->addWidget(comboBox_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setEditable(false);

        horizontalLayout_2->addWidget(comboBox_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        comboBox_4 = new QComboBox(centralwidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setEditable(false);

        horizontalLayout_3->addWidget(comboBox_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_7->addWidget(label_9);

        comboBox_5 = new QComboBox(centralwidget);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_7->addWidget(comboBox_5);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);


        verticalLayout_6->addLayout(verticalLayout);


        horizontalLayout_11->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(false);

        horizontalLayout_8->addWidget(comboBox);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_8->addWidget(pushButton_4);


        horizontalLayout_14->addLayout(horizontalLayout_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_13->addWidget(label_8);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_13->addWidget(lineEdit_4);


        horizontalLayout_14->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_12->addWidget(checkBox_2);

        checkBox_11 = new QCheckBox(centralwidget);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));

        horizontalLayout_12->addWidget(checkBox_11);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_12->addWidget(checkBox);

        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        horizontalLayout_12->addWidget(checkBox_6);


        horizontalLayout_14->addLayout(horizontalLayout_12);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_10->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_10->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_10->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_10->addWidget(pushButton_5);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_10->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_10->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_9->addWidget(checkBox_3);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        horizontalLayout_9->addWidget(checkBox_10);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_2);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_9->addWidget(lineEdit_5);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_4);


        horizontalLayout_11->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout_11);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout_5->addWidget(lineEdit_3);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(verticalLayout_7);

        MQSerial->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MQSerial);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MQSerial->setStatusBar(statusbar);

        retranslateUi(MQSerial);

        comboBox_2->setCurrentIndex(19);
        comboBox_3->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MQSerial);
    } // setupUi

    void retranslateUi(QMainWindow *MQSerial)
    {
        MQSerial->setWindowTitle(QApplication::translate("MQSerial", "\345\260\217\345\226\265\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", 0));
        label_3->setText(QApplication::translate("MQSerial", "Baud", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MQSerial", "50", 0)
         << QApplication::translate("MQSerial", "75", 0)
         << QApplication::translate("MQSerial", "110", 0)
         << QApplication::translate("MQSerial", "134", 0)
         << QApplication::translate("MQSerial", "150", 0)
         << QApplication::translate("MQSerial", "200", 0)
         << QApplication::translate("MQSerial", "300", 0)
         << QApplication::translate("MQSerial", "600", 0)
         << QApplication::translate("MQSerial", "1200", 0)
         << QApplication::translate("MQSerial", "1800", 0)
         << QApplication::translate("MQSerial", "2400", 0)
         << QApplication::translate("MQSerial", "4800", 0)
         << QApplication::translate("MQSerial", "9600", 0)
         << QApplication::translate("MQSerial", "14400", 0)
         << QApplication::translate("MQSerial", "19200", 0)
         << QApplication::translate("MQSerial", "38400", 0)
         << QApplication::translate("MQSerial", "56000", 0)
         << QApplication::translate("MQSerial", "57600", 0)
         << QApplication::translate("MQSerial", "76800", 0)
         << QApplication::translate("MQSerial", "115200", 0)
         << QApplication::translate("MQSerial", "128000", 0)
         << QApplication::translate("MQSerial", "256000", 0)
        );
        comboBox_2->setCurrentText(QApplication::translate("MQSerial", "115200", 0));
        label_4->setText(QApplication::translate("MQSerial", "Data", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MQSerial", "5", 0)
         << QApplication::translate("MQSerial", "6", 0)
         << QApplication::translate("MQSerial", "7", 0)
         << QApplication::translate("MQSerial", "8", 0)
        );
        label_5->setText(QApplication::translate("MQSerial", "Stop", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MQSerial", "1", 0)
         << QApplication::translate("MQSerial", "1.5", 0)
         << QApplication::translate("MQSerial", "2", 0)
        );
        label_9->setText(QApplication::translate("MQSerial", "Checkout", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MQSerial", "NONE", 0)
         << QApplication::translate("MQSerial", "ODD", 0)
         << QApplication::translate("MQSerial", "EVEN", 0)
         << QApplication::translate("MQSerial", "MARK", 0)
         << QApplication::translate("MQSerial", "SPACE", 0)
        );
        checkBox_4->setText(QApplication::translate("MQSerial", "DTR", 0));
        checkBox_5->setText(QApplication::translate("MQSerial", "RTS", 0));
        label_2->setText(QApplication::translate("MQSerial", "\344\270\262\345\217\243\345\217\267", 0));
        pushButton_4->setText(QApplication::translate("MQSerial", "Open", 0));
        label_8->setText(QApplication::translate("MQSerial", "\350\241\214\345\255\227\347\254\246\346\225\260", 0));
        lineEdit_4->setText(QApplication::translate("MQSerial", "0", 0));
        checkBox_2->setText(QApplication::translate("MQSerial", "Show Hex", 0));
        checkBox_11->setText(QApplication::translate("MQSerial", "to Hex", 0));
        checkBox->setText(QApplication::translate("MQSerial", "Stop update", 0));
        checkBox_6->setText(QApplication::translate("MQSerial", "Auto Scroll", 0));
        pushButton_8->setText(QApplication::translate("MQSerial", "Scan COM", 0));
        pushButton_7->setText(QApplication::translate("MQSerial", "Help", 0));
        pushButton_6->setText(QApplication::translate("MQSerial", "Goto Top", 0));
        pushButton_5->setText(QApplication::translate("MQSerial", "Clear", 0));
        pushButton->setText(QApplication::translate("MQSerial", "Save", 0));
        pushButton_2->setText(QApplication::translate("MQSerial", "Send File", 0));
        checkBox_3->setText(QApplication::translate("MQSerial", "Send HEX", 0));
        checkBox_10->setText(QApplication::translate("MQSerial", "Send new line", 0));
        label_10->setText(QApplication::translate("MQSerial", "Receive speed", 0));
        pushButton_3->setText(QApplication::translate("MQSerial", "\345\217\221\351\200\201~", 0));
        label_6->setText(QApplication::translate("MQSerial", "Send", 0));
        label_7->setText(QApplication::translate("MQSerial", "Receive", 0));
        label->setText(QApplication::translate("MQSerial", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\351\273\221</span>\345\261\261\343\201\256<span style=\" font-size:8pt;\">\345\260\217</span><span style=\" font-size:11pt;\">\345\226\265-</span><span style=\" font-weight:600; color:#55aa7f;\">ma</span><span style=\" font-weight:600; color:#6d72a7;\">de</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MQSerial: public Ui_MQSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQSERIAL_H
