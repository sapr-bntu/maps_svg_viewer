#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include "svgview.h"
//#include "windows.h"
#include <QWindowsStyle>
#include <QtSql/QtSql>
#include <QDialog>
#include <QtSql>
#include <QTableView>




 class QLabel;
 class QPlainTextEdit;


namespace Ui {
    class map;
}

class map : public QMainWindow
{
    Q_OBJECT





public:
    explicit map(QWidget *parent = 0);
    ~map();


private:


    QString currentid;

    Ui::map *ui;
    SvgView *m_view;

    QSqlTableModel *model;

    QTableView *view;

private slots:
    void openFile();

  private slots:

     void setText();

 private slots:
     void about();

 private slots:
     void aboutpiu();



 private slots:

     void button_clicked();

 private slots:
     void button_delete();

 private slots:
     void otrisovka();



};

#endif // MAP_H
