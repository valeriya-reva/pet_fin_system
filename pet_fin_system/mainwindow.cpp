/*! \file mainwindow.cpp */
#include "mainwindow.h"
#include "./ui_mainwindow.h"
/*! constructor */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/*! destructor */
MainWindow::~MainWindow()
{
    delete ui;
}

