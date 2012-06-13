#include <QtGui/QApplication>
#include "map.h"
#include <QApplication>
#include <QTextCodec>
#include <QLocale>
#include <QLibraryInfo>
#include <QSplashScreen>
#include <QtSql/QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



QCoreApplication::addLibraryPath( "/data/data/org.kde.necessitas.ministro/files/qt/plugins/" );




    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    map w;
    w.show();




    return a.exec();
}
