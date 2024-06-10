#pragma once
#include "FileTabWidget.h"
#include <QMenuBar>
#include <QWidget>
#include <qevent.h>

namespace View {

class MainWindow : public QWidget {
private:
  FileTabWidget *fileTabWidget;
  QMenuBar *menuBar;

  void configureMenuBar();

public:
  MainWindow(int width, int height);
  ~MainWindow();

protected:
  void paintEvent(QPaintEvent *event);
};

} // namespace View
