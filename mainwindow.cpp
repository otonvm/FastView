#include "mainwindow.h"
#include <thread>
#include <chrono>

MainWindow::MainWindow()
    : QMainWindow()
{
    if (objectName().isEmpty())
        setObjectName("MainWindow");

    setMinimumSize(640, 480);

    setup_ui();
    setup_image_view();
}

void MainWindow::setup_ui()
{
    //create a central widget for items
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    //main vertical layout for the central widget
    mainVLayout = new QVBoxLayout(centralWidget);

    //image view on top
    imageView = new QGraphicsView(centralWidget);
    mainVLayout->addWidget(imageView);

    //a horizontal layout for controls
    controlsLayout = new QHBoxLayout();
    //controls under the image view
    mainVLayout->addLayout(controlsLayout);

    //controls
    progressSlider = new QSlider(Qt::Horizontal, centralWidget);
    prevButton = new QPushButton("&Previous", centralWidget);
    nextButton = new QPushButton("&Next", centralWidget);

    //adding controls to the layout in order
    controlsLayout->addWidget(progressSlider);
    controlsLayout->addWidget(prevButton);
    controlsLayout->addWidget(nextButton);
}

void MainWindow::setup_image_view() {
    imageViewScene = new QGraphicsScene;
    imageView->setScene(imageViewScene);
    auto image = new QPixmap();
    if (image->load("/Users/Oton/BTSync/Hex11.png")) {
        //const QPixmap& image_r = *image;
        imageViewScene->addPixmap(*image);
    }

    std::chrono::seconds time(2);
    std::this_thread::sleep_for(time);

    if (image->load("/Users/Oton/BTSync/Hex13.png"))
        imageViewScene->addPixmap(*image);
}
