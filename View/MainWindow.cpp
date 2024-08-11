#include "MainWindow.h"
#include "FileTabWidget.h"
#include <QAction>
#include <qaction.h>
#include <qmenu.h>
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
  this->configureFileMenuBar();
  this->configureEditMenuBar();
  this->configureViewMenuBar();
  this->configureSettingsMenuBar();

  this->menuBar->setStyleSheet("background-color: rgb(250,250,250);");
  this->setStyleSheet(this->styleSheet().append("color: rgb(80, 80, 80);"));
  this->setStyleSheet(
      this->styleSheet().append("selection-color: rgb(0, 0, 0);"));
}

void MainWindow::configureFileMenuBar() {
  QMenu *fileMenu = this->menuBar->addMenu("File");
  QAction *newMenuAction = fileMenu->addAction("New");
  QAction *deleteMenuAction = fileMenu->addAction("Delete");
  QAction *loadFileAction = fileMenu->addAction("Load");
  QAction *saveFileAction = fileMenu->addAction("Save");
  QAction *exitApplicationAction = fileMenu->addAction("Exit");

  connect(newMenuAction, &QAction::triggered, this, &MainWindow::addNewTab);
  connect(deleteMenuAction, &QAction::triggered, this,
          &MainWindow::deleteCurrentTab);
  connect(exitApplicationAction, &QAction::triggered, this,
          &MainWindow::closeApplication);
}

void MainWindow::configureEditMenuBar() {
  QMenu *editMenu = this->menuBar->addMenu("Edit");
  QAction *undoEditAction = editMenu->addAction("Undo");
  QAction *redoEditAction = editMenu->addAction("Redo");
  QAction *cutSelectedAction = editMenu->addAction("Cut");
  QAction *copySelectedAction = editMenu->addAction("Copy");
  QAction *pasteAction = editMenu->addAction("Paste");
  QAction *deleteSelectedAction = editMenu->addAction("Delete");
  QAction *selectAllAction = editMenu->addAction("Select All");
}

void MainWindow::configureViewMenuBar() {
  QMenu *viewMenu = this->menuBar->addMenu("View");
  QAction *zoomInAction = viewMenu->addAction("Zoom In");
  QAction *zoomOutAction = viewMenu->addAction("Zoom Out");
}

void MainWindow::configureSettingsMenuBar() {
  QMenu *settingsMenu = this->menuBar->addMenu("Settings");
  QAction *preferencesSelectedAction = settingsMenu->addAction("Preferences");
}

void MainWindow::addNewTab() { this->fileTabWidget->addNewTab(); }
void MainWindow::deleteCurrentTab() { this->fileTabWidget->deleteCurrentTab(); }
void MainWindow::closeApplication() {
  this->fileTabWidget->parentWidget()->close();
}
} // namespace View
