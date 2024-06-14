#pragma once
#include "RopeNode.h"

namespace Model {

class TextDataRole {

private:
  RopeNode *rootNode;

public:
  TextDataRole();
  ~TextDataRole();

  void pushBack();
  void popBack();

  void insert(const int idx, char *charToAdd);
  void erase(const int start, const int end);

  void concatenate(RopeNode *firstNode, RopeNode *secondNode);
  void split();

  int indexOf(const int startIdx, char *charToFind);
};

} // namespace Model
