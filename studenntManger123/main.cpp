#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));

    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));

    //QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));


    MainWindow w;
    w.setWindowTitle(QString("设计者201708141160，许涛涛"));
    w.show();

    return a.exec();
}
