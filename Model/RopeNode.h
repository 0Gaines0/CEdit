#pragma once
#include "string"

namespace Model {

enum NodeDirection { Left, Right, Parent };

class RopeNode {
private:
  RopeNode *leftNode;
  RopeNode *rightNode;
  RopeNode *parentNode;

  std::string &currentStr;
  int leafCount;
  int weight;

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

  std::string &getCurrentStr() const;
  void setCurrentStr(std::string &newString);

  int getLeafCount() const;
  void setLeftCount(const int newCount);

  int getWeight() const;
  void determineWeight();
};

} // namespace Model
