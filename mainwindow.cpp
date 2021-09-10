#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addButton_clicked()
{
    QString textData = ui->lineEdit->text();
    ui->listWidget->addItem(textData);
}


void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    if(item->foreground() != QColor(Qt::green)) { //Check wheter item is completed
        item->setForeground(QColor(Qt::green));
    }
    else {
        item->setForeground(QColor(Qt::black)); //If item is completed double-click will turn its status back to not completed
    }
}

