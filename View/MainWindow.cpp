#include "MainWindow.h"
#include "FileTabWidget.h"
#include <qmenubar.h>

namespace View {

MainWindow::MainWindow(int width, int height) : QWidget() {
  QWidget::resize(width, height);
  QWidget::setWindowTitle(QObject::tr("Cedit"));
  this->fileTabWidget = new FileTabWidget(this);
  this->configureMenuBar();
}

MainWindow::~MainWindow() = default;

void MainWindow::paintEvent(QPaintEvent *event) { QWidget::paintEvent(event); }

void MainWindow::configureMenuBar() {
  this->menuBar = new QMenuBar(this);
  this->menuBar->addMenu("File");
  this->menuBar->addMenu("Edit");
  this->menuBar->addMenu("View");
  this->menuBar->addMenu("Settings");
  this->menuBar->setStyleSheet("background-color: rgb(250,250,250);");
  this->setStyleSheet(this->styleSheet().append("color: rgb(80, 80, 80);"));
  this->setStyleSheet(
      this->styleSheet().append("selection-color: rgb(0, 0, 0);"));
}

} // namespace View
