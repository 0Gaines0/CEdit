#pragma once
#include <QPlainTextEdit>
#include <qevent.h>
#include <qobjectdefs.h>

namespace View {
class TextEditor : public QPlainTextEdit {
  Q_OBJECT

public:
  TextEditor(QWidget *parent = nullptr);
  ~TextEditor();

  void lineNumberAreaPaintEvent(QPaintEvent *event);
  int getLineNumberAreaWidth();

protected:
  void resizeEvent(QResizeEvent *event);

private slots:
  void updateLineNumberAreaWidth(int newBlockCount);
  void highlightCurrentLine();
  void updateLineNumberArea(const QRect &rect, int newNum);

private:
  QWidget *lineNumberArea;
};
} // namespace View
