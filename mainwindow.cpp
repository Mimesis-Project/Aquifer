#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    M_Player = new QMediaPlayer();
    ui->pushButton_Play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_file_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this,tr("Select Audio File"),"",tr("Flac Files(*.flac)"));
    M_Player->setSource(QUrl(FileName));
    M_Player->
    ui->lbl_Value_File_Name->setText(FileName);

}


void MainWindow::on_pushButton_Play_clicked()
{

}


void MainWindow::on_pushButton_Pause_clicked()
{

}


void MainWindow::on_horizontalSlider_Volume_valueChanged(int value)
{

}

