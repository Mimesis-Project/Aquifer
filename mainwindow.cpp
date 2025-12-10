#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton_Play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_open_file_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this,
                                                    tr("Select Audio File"),
                                                    "",
                                                    tr("Flac Files(*.flac)"));
}

void MainWindow::on_push_button_play_clicked() {}

void MainWindow::on_push_button_pause_clicked() {}

void MainWindow::on_horizontal_slider_volume_value_changed(int value) {}
