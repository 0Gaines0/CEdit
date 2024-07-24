#pragma once
#include "RopeNode.h"
#include <stack>

namespace Model {

class TextDataRope {

private:
  RopeNode *rootNode;

public:
  TextDataRope();
  ~TextDataRope();

  void pushBack(char *charToAdd);
  void popBack();

  std::stack<RopeNode *> collectLeaves();

  void insert(const int idx, char *charToAdd);
  void erase(const int start, const int end);

  void concatenate(RopeNode *firstNode, RopeNode *secondNode);
  void split(RopeNode *node, int index, RopeNode *&leftPart,
             RopeNode *&rightPart);

  int indexOf(const int startIdx, char *charToFind);
};

} // namespace Model
