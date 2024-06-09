#pragma once
#include "TextEditor.h"
#include <QWidget>

namespace View {
class NumberedLineArea : public QWidget {
private:
  TextEditor *editor;

public:
  NumberedLineArea(TextEditor *editor);
  ~NumberedLineArea();

  QSize sizeHint() const;

protected:
  void paintEvent(QPaintEvent *event);
};
} // namespace View
