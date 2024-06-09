#include "FileTabWidget.h"
#include "TextEditor.h"
#include "ViewConstants.h"
#include <QTabBar>
#include <iostream>
#include <iterator>
#include <ostream>
#include <qevent.h>
#include <qpushbutton.h>
#include <qtabbar.h>
#include <qtabwidget.h>
#include <string>

namespace View {

FileTabWidget::FileTabWidget(QWidget *parent) : QTabWidget(parent) {
  QTabWidget::resize(ViewConstants::fileTabWidth, ViewConstants::fileTabHeight);
  QTabWidget::setTabShape(QTabWidget::Rounded);
  this->configureTabBtns();
  this->updatePos();
  this->addNewTab();
}

FileTabWidget::~FileTabWidget() = default;

QWidget *FileTabWidget::addNewTab() {
  TextEditor *editor = new TextEditor();
  QString tabText = "new " + QString::number(this->tabBar()->count() + 1);
  this->addTab(editor, tabText);
  this->updateTabBtnsPos();
  return editor;
}

void FileTabWidget::deleteCurrentTab() {
  int currentIndex = this->tabBar()->currentIndex();
  QWidget *editor = this->widget(currentIndex);
  this->removeTab(currentIndex);
  delete editor;

  this->updateTabBtnsPos();
}

void FileTabWidget::paintEvent(QPaintEvent *event) {
  QTabWidget::paintEvent(event);
}

void FileTabWidget::updatePos() {
  const int totalWidth = ViewConstants::windowWidth;
  int xPoint = (totalWidth - this->width()) / 2;
  int yPoint = 0 + ViewConstants::fileTabYOffset;

  this->move(xPoint, yPoint);
}

void FileTabWidget::configureTabBtns() {
  this->configureAddTabBtn();
  this->configureDelTabBtn();
}

void FileTabWidget::updateTabBtnsPos() {
  this->updateAddTabBtnPos();
  this->updateDelTabBtnPos();
}

void FileTabWidget::updateAddTabBtnPos() {

  int currentIndex = this->tabBar()->count();

  QRect tabRect = this->tabBar()->tabRect(currentIndex - 1);
  int xPoint = 0;
  if (this->tabBar()->count() == 1) {
    xPoint = tabRect.x() + ViewConstants::tabBtnOffset;

  } else {
    xPoint = tabRect.x() + tabRect.width();
  }
  int yPoint =
      ((this->tabBar()->y() + tabRect.height()) - ViewConstants::tabBtnHeight) /
      2;
  this->addBtn->move(xPoint, yPoint);
}

void FileTabWidget::configureAddTabBtn() {
  this->addBtn = new QPushButton("+", this);
  this->addBtn->resize(ViewConstants::tabBtnWidth, ViewConstants::tabBtnHeight);
  connect(this->addBtn, &QPushButton::clicked, [=] { emit this->addNewTab(); });
}

void FileTabWidget::configureDelTabBtn() {
  this->delBtn = new QPushButton("-", this);
  this->delBtn->resize(ViewConstants::tabBtnWidth, ViewConstants::tabBtnHeight);
  connect(this->delBtn, &QPushButton::clicked,
          [=] { emit this->deleteCurrentTab(); });
}

void FileTabWidget::updateDelTabBtnPos() {
  int xPoint = (this->addBtn->x() + this->addBtn->width());
  int yPoint = this->addBtn->y();
  this->delBtn->move(xPoint, yPoint);
}

} // namespace View
