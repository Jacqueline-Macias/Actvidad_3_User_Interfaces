#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_textEdit_4_copyAvailable(bool b)
{

}


void MainWindow::on_textEdit_3_copyAvailable(bool b)
{

}


void MainWindow::on_textEdit_2_copyAvailable(bool b)
{

}


void MainWindow::on_textBrowser_2_anchorClicked(const QUrl &arg1)
{

}


void MainWindow::on_textBrowser_3_anchorClicked(const QUrl &arg1)
{

}

