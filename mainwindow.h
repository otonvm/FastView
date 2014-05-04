#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGraphicsView>
#include <QPushButton>
#include <QSlider>
#include <QGraphicsScene>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow();

private:
    void setup_ui();
    void setup_image_view();

    QWidget* centralWidget;
    QGraphicsView* imageView;
    QPushButton* prevButton;
    QPushButton* nextButton;
    QSlider* progressSlider;

    QVBoxLayout* mainVLayout;
    QHBoxLayout* controlsLayout;

    QGraphicsScene* imageViewScene;
};

#endif // MAINWINDOW_H
