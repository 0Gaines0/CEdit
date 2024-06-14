#pragma once

namespace Model {

enum NodeDirection { Left, Right, Parent };

class RopeNode {
private:
  RopeNode *leftNode;
  RopeNode *rightNode;
  RopeNode *parentNode;

  char *currentStr;
  int leafCount;

  RopeNode *getLeftNode() const;
  RopeNode *getRightNode() const;
  RopeNode *getParentNode() const;

  void setLeftNode(RopeNode *nodeToAdd);
  void setRightNode(RopeNode *nodeToAdd);
  void setParentNode(RopeNode *nodeToAdd);

public:
  RopeNode();
  ~RopeNode();

  RopeNode *getNode(const NodeDirection direction);
  void setNode(const NodeDirection direction, RopeNode *nodeToAdd);

  char *getCurrentStr() const;
  void setCurrentStr(char *str);

  int getLeafCount() const;
  void setLeftCount(const int newCount);
};

} // namespace Model
