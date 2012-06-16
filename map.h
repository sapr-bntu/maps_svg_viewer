#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include "svgview.h"
#include "windows.h"
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

public slots:
   bool openFile();

 public slots:

     bool setText();

public slots:
     bool about();

 public slots:
    bool aboutpiu();

public slots:

    bool  button_clicked();

public slots:
     bool  button_delete();

 private slots:
     void otrisovka(QPoint p);



};

#endif // MAP_H
