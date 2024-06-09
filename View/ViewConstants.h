#pragma once
#include <QColor>

namespace View {
class ViewConstants {
public:
  static constexpr int windowWidth = 800;
  static constexpr int windowHeight = 800;

  static constexpr int fileTabWidth = 770;
  static constexpr int fileTabHeight = 735;
  static constexpr int fileTabYOffset = 50;

  static constexpr int textEditWidth = 400;
  static constexpr int textEditHeight = 400;

  static constexpr int tabBtnWidth = 20;
  static constexpr int tabBtnHeight = 20;
  static constexpr int tabBtnOffset = 61;

  static constexpr QColor HIGHLIGHT_COLOR = QColor(144, 238, 144);
};
} // namespace View
