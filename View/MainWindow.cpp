#include "MainWindow.h"
#include "FileTabWidget.h"

namespace View {

MainWindow::MainWindow(int width, int height) : QWidget() {
  QWidget::resize(width, height);
  QWidget::setWindowTitle(QObject::tr("Cedit"));
  this->fileTabWidget = new FileTabWidget(this);
}

MainWindow::~MainWindow() = default;

void MainWindow::paintEvent(QPaintEvent *event) { QWidget::paintEvent(event); }

} // namespace View
