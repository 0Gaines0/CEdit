#pragma once
#include <QPushButton>
#include <QTabWidget>
#include <qobjectdefs.h>
#include <qpushbutton.h>

namespace View {

class FileTabWidget : public QTabWidget {
  Q_OBJECT

private:
  QPushButton *addBtn;
  QPushButton *delBtn;

  void configureTabBtns();
  void updateTabBtnsPos();

  void configureDelTabBtn();
  void updateDelTabBtnPos();

  void updateAddTabBtnPos();
  void configureAddTabBtn();

public:
  FileTabWidget(QWidget *parent = nullptr);
  ~FileTabWidget();

  QWidget *addNewTab();
  void deleteCurrentTab();
  void updatePos();

protected:
  void paintEvent(QPaintEvent *event);
};

} // namespace View
