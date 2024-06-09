#pragma once
#include "FileTabWidget.h"
#include <QWidget>
#include <qevent.h>

namespace View {

class MainWindow : public QWidget {
private:
  FileTabWidget *fileTabWidget;

public:
  MainWindow(int width, int height);
  ~MainWindow();

protected:
  void paintEvent(QPaintEvent *event);
};

} // namespace View
