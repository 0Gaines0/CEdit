#include "TextEditor.h"
#include "NumberedLineArea.h"
#include "ViewConstants.h"
#include <QPainter>
#include <QTextBlock>
#include <qchar.h>
#include <qevent.h>
#include <qnamespace.h>
#include <qplaintextedit.h>
#include <qtextcursor.h>
#include <qtextedit.h>
#include <sys/types.h>

namespace View {

TextEditor::TextEditor(QWidget *parent) : QPlainTextEdit(parent) {
  this->lineNumberArea = new NumberedLineArea(this);

  connect(this, &TextEditor::blockCountChanged, this,
          &TextEditor::updateLineNumberAreaWidth);
  connect(this, &TextEditor::updateRequest, this,
          &TextEditor::updateLineNumberArea);
  connect(this, &TextEditor::cursorPositionChanged, this,
          &TextEditor::highlightCurrentLine);

  this->updateLineNumberAreaWidth(0);
  this->highlightCurrentLine();
}

TextEditor::~TextEditor() = default;

int TextEditor::getLineNumberAreaWidth() {
  int count = 1;
  int max = qMax(1, this->blockCount());
  while (max >= 10) {
    max /= 10;
    count++;
  }

  int space =
      3 + this->fontMetrics().horizontalAdvance(QLatin1Char('9')) * count;

  return space;
}

void TextEditor::updateLineNumberAreaWidth(int newBlockCount) {
  this->setViewportMargins(this->getLineNumberAreaWidth(), 0, 0, 0);
}

void TextEditor::updateLineNumberArea(const QRect &rect, int deltaY) {
  if (deltaY) {
    this->lineNumberArea->scroll(0, deltaY);
  } else {
    this->lineNumberArea->update(0, rect.y(), this->lineNumberArea->width(),
                                 rect.height());
  }

  if (rect.contains(this->viewport()->rect())) {
    this->updateLineNumberAreaWidth(0);
  }
}

void TextEditor::resizeEvent(QResizeEvent *event) {
  QPlainTextEdit::resizeEvent(event);

  QRect contentRect = this->contentsRect();
  this->lineNumberArea->setGeometry(QRect(contentRect.left(), contentRect.top(),
                                          this->getLineNumberAreaWidth(),
                                          contentRect.height()));
}

void TextEditor::highlightCurrentLine() {
  QList<QTextEdit::ExtraSelection> extraSelections;

  if (!this->isReadOnly()) {
    QTextEdit::ExtraSelection selection;

    QColor lineColor = View::ViewConstants::HIGHLIGHT_COLOR;

    selection.format.setBackground(lineColor);
    selection.format.setProperty(QTextFormat::FullWidthSelection, true);
    selection.cursor = textCursor();
    selection.cursor.clearSelection();
    extraSelections.append(selection);
  }
  setExtraSelections(extraSelections);
}

void TextEditor::lineNumberAreaPaintEvent(QPaintEvent *event) {
  QPainter painter(this->lineNumberArea);
  painter.fillRect(event->rect(), Qt::lightGray);

  QTextBlock block = firstVisibleBlock();
  int blockNum = block.blockNumber();
  int top = (int)this->blockBoundingGeometry(block)
                .translated(this->contentOffset())
                .top();
  int bottom = top + (int)this->blockBoundingRect(block).height();

  QTextCursor cursor = this->textCursor();

  while (block.isValid() && top <= event->rect().bottom()) {
    if (block.isVisible() && bottom >= event->rect().top()) {
      QString number = QString::number(blockNum + 1);

      painter.setPen(Qt::black);
      painter.drawText(0, top, this->lineNumberArea->sizeHint().width(),
                       this->fontMetrics().height(), Qt::AlignRight, number);
    }

    block = block.next();
    top = bottom;
    bottom = top + (int)this->blockBoundingRect(block).height();
    blockNum++;
  }
}
} // namespace View
