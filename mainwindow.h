#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGraphicsView>
#include <QPushButton>
#include <QSlider>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow();
    void setup_widgets();
    void setup_layouts();

private:
    QWidget* centralWidget;
    QGraphicsView* imageView;
    QPushButton* prevButton;
    QPushButton* nextButton;
    QSlider* progressSlider;

    QVBoxLayout* mainVLayout;
    QHBoxLayout* controlsLayout;
};

#endif // MAINWINDOW_H
