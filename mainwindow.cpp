#include "mainwindow.h"

MainWindow::MainWindow()
    : QMainWindow()
{
    if (objectName().isEmpty())
        setObjectName("MainWindow");

    setMinimumSize(640, 480);

    setup_widgets();
    setup_layouts();
}

void MainWindow::setup_widgets()
{
    centralWidget = new QWidget(this);

    mainVLayout = new QVBoxLayout(centralWidget);
    centralWidget->setLayout(mainVLayout);
    setCentralWidget(centralWidget);

    imageView = new QGraphicsView(centralWidget);

    prevButton = new QPushButton("&Previous", centralWidget);

    nextButton = new QPushButton("&Next", centralWidget);

    progressSlider = new QSlider(Qt::Horizontal, centralWidget);


}

void MainWindow::setup_layouts() {
    mainVLayout->addWidget(imageView);

    controlsLayout = new QHBoxLayout();
    controlsLayout->addWidget(progressSlider);
    controlsLayout->addWidget(prevButton);
    controlsLayout->addWidget(nextButton);

    mainVLayout->addLayout(controlsLayout);
}
