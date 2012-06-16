#include "map.h"
#include "ui_map.h"
#include <QFileDialog>
#include <QMessageBox>
 #include <QtGui>

#include "svgview.h"
#include "map.h"
#include "scribblearea.h"
#include <QTableView>
#include <QScrollArea>
#include <QAbstractItemModel>


#include <QtSql>
 class QLabel;

map::map(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::map),m_view(new SvgView)
{


    ui->setupUi(this);


    QFile file("piu.s3db") ;
    QSqlDatabase db;
    if (file.exists())
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("piu.s3db");
        db.open();
        QSqlQuery query;
        query.exec("CREATE TABLE map ("
                   "ID INTEGER  NOT NULL PRIMARY KEY AUTOINCREMENT,"
                   "Name NAME  NULL,"
                   "Street STREET  NULL)");

    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("piu.s3db");
        db.open();
    }



    model = new QSqlTableModel(this);
    model->setTable("map");
    model->select();
    model->setFilter("");
    ui->tableView->setModel(model);

    setWindowTitle(tr("Minsk Map v1.15a"));
     resize(1000, 650);

    // int frameStyle = QFrame::Sunken | QFrame::Panel;


       ui->verticalLayout->addWidget(m_view);



    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(openFile()));

    connect(ui->actionExit,SIGNAL(triggered()),this,SLOT(close()));

    connect(ui->actionAbout_QT,SIGNAL(triggered()),this,SLOT(about()));

    connect(ui->actionAbout,SIGNAL(triggered()),this,SLOT(aboutpiu()));

connect(ui->actionOpen_2,SIGNAL(triggered()),this,SLOT(openbd()));

connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(button_clicked()));

connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(button_delete()));

connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(otrisovka()));

}

map::~map()
{
    delete ui;
}




void map::button_delete()
{


//QSqlQuery query;
//query.exec("DELETE FROM map  WHERE id = 1");





//QModelIndexList selected = view->selectionModel()->selectedIndexes();
//for (int i = 0; i < selected.size(); ++i) model->removeRows(selected.at(i).row(), 1);
// model->select();


//      QModelIndexList indexes =   ui->tableView->selectionModel()->selection().indexes();
//        foreach(QModelIndex index, indexes) {
//            QSqlRecord record = model->record(index.row());
//            int id = record.value("id").toInt();
//        }
    QString text3;


        QSqlQuery query;

        text3 = ui->lineEdit_3->text();
      //  piu = text3.toString();

query.exec("DELETE FROM map WHERE ID = '"+text3+"'");

      //  query.exec(QString("DELETE FROM map WHERE ID = '%1'").arg(currentid));

        model->select();


}



void map::button_clicked()
{
    QString text;
    QString text2;

QSqlQuery query;

    text = ui->lineEdit->text();

    text2 = ui->lineEdit_2->text();

    query.exec("INSERT INTO map ( Name, Street)  VALUES('"+text+"','"+text2+"')");

       model->select();
}

void map::otrisovka()
{   QString xx;
    QString yy;

    xx= ui->lineEdit_3->text();
    yy = ui->lineEdit_2->text();
    bool ok;

    int x=xx.toInt(&ok);
int y=yy.toInt(&ok);
  QPainter painter(this);
    painter.drawRect(x,y,5,5);
}


void map::aboutpiu()
{QMessageBox::about(this, tr("About Coders"),
                    tr("<p> <b>Minsk Map v1.15a </b> </p>"
                       "<p>-------------------------------</p>"
                       "<p><b>Coders:</p></b>"
                       "<p>Karpievich E.  ->Titarh(Captain of our team)</p>"
                       "<p>Krivoruchko O. -> Veres(Form's designer)</p>"
                       "<p>Sitko D.       ->Timif(Map's optimizer)</p>"
                       "<p>Koshelev E.    ->Genikoff(Idea's producer)</p>"
                       "<p>=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=</p>"
                       "<p><b>Special thanks to:</p></b>"
                       "<p>SteamLocomotive(alpha-tester)</p>"
                       "<p>=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=</p>"
                       "<p><b>Project Manager:</p></b>"
                       "<p>Galko A.V.      ->g-ferz</p>"));




}

void map::about()

{
    QMessageBox::about(this, tr("About Project"),
            tr("<p><b>Minsk Map v1.15a</p></b>"));
}

void map::setText()
{
    bool ok;
    QString text = QInputDialog::getText(this, tr("ввод метки"),
                                         tr("метка:"), QLineEdit::Normal,
                                         QDir::home().dirName(), &ok);
    if (ok && !text.isEmpty())
        ui->lineEdit->setText(text);
//     textLabel->setText();
}

void map::openFile()
 {


        // fileName = QFileDialog::getOpenFileName(this, tr("Open SVG File"),
         //        "", "SVG files (*.svg *.svgz *.svg.gz)");
QString fileName;
     fileName=":/map.svg";
     if (!fileName.isEmpty()) {
         QFile file(fileName);
         if (!file.exists()) {
             QMessageBox::critical(this, tr("Open SVG File"),
                            QString("Could not open file '%1'.").arg(fileName));


             return;
         }

         m_view->openFile(file);

//         if (!fileName.startsWith(":/")) {
//             m_currentPath = fileName;
//             setWindowTitle(tr("%1 - SVGViewer").arg(m_currentPath));
//         }

//         m_outlineAction->setEnabled(true);
//         m_backgroundAction->setEnabled(true);

//         resize(m_view->sizeHint() + QSize(80, 80 + menuBar()->height()));
     }
 }
