#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    qDebug() << QStyleFactory::keys();//输出可用风格,帖子第三行的内容
//    a.setStyle(QStyleFactory::create("Motif"));

    w.show();
    return a.exec();
}
