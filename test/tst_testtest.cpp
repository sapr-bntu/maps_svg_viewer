#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore>
#include <QtTest>
#include "../map.h"
#include "../svgview.h"

#include <QFile>
#include <QWheelEvent>
#include <QMouseEvent>
#include <QGraphicsRectItem>
#include <QGraphicsSvgItem>
#include <QPaintEvent>
#include <QtGui/QApplication>
#include <QApplication>
#include <QTextCodec>
#include <QLocale>
#include <QLibraryInfo>
#include <QSplashScreen>
#include <QtSql/QtSql>

class TestTest : public QObject
{
    Q_OBJECT
    
public:
    TestTest();
    
private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
     void testCase5();
    void testCase6();
      void testCase7();
        void testCase8();
         void testCase9();
         void testCase10();
         void testCase11();
         void testCase12();
         void testCase13();
         void testCase14();
         void testCase15();
};

TestTest::TestTest()
{
}

void TestTest::initTestCase()
{
}

void TestTest::cleanupTestCase()
{
}

void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}
void TestTest::testCase2()
{
    map mp;
    bool bln = mp.about();
    QCOMPARE(bln,true);

}
void TestTest::testCase3()
{
    map mp;
    bool bln = mp.aboutpiu();
    QCOMPARE(bln,true);
}
void TestTest::testCase4()
{
    map mp;
    bool flag = mp.setText();
    QCOMPARE(true, flag);
}
void TestTest::testCase5()
{
    map mp;
    bool flag = mp.setText();
    QCOMPARE(true, flag);
}
void TestTest::testCase6()
{
    map mp;
    bool flag = mp.openFile();
    QCOMPARE(true, flag);
}
void TestTest::testCase7()
{
    map mp;
    bool blnVar = mp.button_clicked();
    QCOMPARE(true, blnVar);
}
void TestTest::testCase8()
{
    map mp;
    bool blnVar = mp.button_delete();
    QCOMPARE(true, blnVar);
}
void TestTest::testCase9()
{  QSqlQuery query;
    bool flag =query.exec("DELETE FROM map WHERE ID = 1");
      QCOMPARE(true, flag);
      //  QCOMPARE(true, flag);
}
void TestTest::testCase10()
{  QSqlQuery query;
    bool flag =query.exec("INSERT INTO map ( Name, Street)  VALUES(fsdf,dsf)");
   QCOMPARE(false, flag);
      //  QCOMPARE(true, flag);
}
void TestTest::testCase11()
{  QSqlQuery query;
    bool flag =query.exec("CREATE TABLE map ("
                          "ID INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT,"
                          "Name NAME  NULL,"
                          "Street STREET  NULL)");
      QCOMPARE(false, flag);
     //  QCOMPARE(true, flag);
}
void TestTest::testCase12()
{  QSqlQuery query;
    bool flag = query.exec("1");
    QCOMPARE(false, flag);
}
void TestTest::testCase13()
{  QSqlQuery query;
    bool flag =query.exec("SELECT ID,Name,stree FROM  map WHERE ID = 111");
      QCOMPARE(false, flag);
      //  QCOMPARE(true, flag);
}


void TestTest::testCase14()
{  QSqlQuery query;
    bool flag =query.exec("SELECT ID,Name,street FROM  map WHERE ID = 1");
    //  QCOMPARE(false, flag);
      QCOMPARE(true, flag);
}

void TestTest::testCase15()
{  QSqlQuery query;
    bool flag =query.exec("DELETE ID,Name,street FROM map WHERE ID = 111");
     // QCOMPARE(true, flag);
    QCOMPARE(false, flag);
}

QTEST_MAIN(TestTest)
///{

///}
#include "tst_testtest.moc"
