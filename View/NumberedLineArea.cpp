#include "NumberedLineArea.h"
#include <qevent.h>
#include <qwidget.h>

namespace View {

NumberedLineArea::NumberedLineArea(TextEditor *editor) : QWidget(editor) {
  this->editor = editor;
}

NumberedLineArea::~NumberedLineArea() = default;

QSize NumberedLineArea::sizeHint() const {
  return QSize(this->editor->getLineNumberAreaWidth(), 0);
}

void NumberedLineArea::paintEvent(QPaintEvent *event) {
  this->editor->lineNumberAreaPaintEvent(event);
}

} // namespace View
