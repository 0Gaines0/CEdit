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
  void configureFileMenuBar();
  void configureEditMenuBar();
  void configureViewMenuBar();
  void configureSettingsMenuBar();

private slots:
  void addNewTab();
  void deleteCurrentTab();
  void closeApplication();

public:
  MainWindow(int width, int height);
  ~MainWindow();

protected:
  void paintEvent(QPaintEvent *event);
};

} // namespace View
