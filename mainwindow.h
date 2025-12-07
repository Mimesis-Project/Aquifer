#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QtMultimediaWidgets/QtMultimediaWidgets>
#include <QtMultimedia/qtmultimediaglobal.h>
#include <QtMultimedia/qtaudio.h>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_file_triggered();

    void on_pushButton_Play_clicked();

    void on_pushButton_Pause_clicked();

    void on_horizontalSlider_Volume_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *M_Player;
};
#endif // MAINWINDOW_H
