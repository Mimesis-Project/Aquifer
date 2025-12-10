#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QMainWindow>
#include <QtMultimedia/QtAudio>
#include <QtMultimedia/qtmultimediaglobal.h>
#include <QtMultimedia/QAudioDevice>
#include <QtMultimedia/QAudioSink>
#include <QtMultimediaWidgets/QtMultimediaWidgets>

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
    void on_action_open_file_triggered();

    void on_push_button_play_clicked();

    void on_push_button_pause_clicked();

    void on_horizontal_slider_volume_value_changed(int value);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *M_Player;
};
#endif // MAINWINDOW_H
