#include "RopeNode.h"

namespace Model {

RopeNode::RopeNode() {
  this->leftNode = nullptr;
  this->rightNode = nullptr;
  this->parentNode = nullptr;
  this->currentStr = nullptr;
  this->leafCount = 0;
}

RopeNode::~RopeNode() {
  // delete and free nodes and str
}

RopeNode *RopeNode::getNode(const NodeDirection direction) {
  RopeNode *node = nullptr;
  switch (direction) {
  case NodeDirection::Left:
    node = this->getLeftNode();
    break;
  case NodeDirection::Right:
    node = this->getRightNode();
    break;
  case NodeDirection::Parent:
    node = this->getParentNode();
    break;
  default:
    break;
  }
  return node;
}

void RopeNode::setNode(const NodeDirection direction, RopeNode *nodeToAdd) {
  switch (direction) {
  case NodeDirection::Left:
    this->setLeftNode(nodeToAdd);
    break;
  case NodeDirection::Right:
    this->setRightNode(nodeToAdd);
    break;
  case NodeDirection::Parent:
    this->setParentNode(nodeToAdd);
    break;
  default:
    break;
  }
}

RopeNode *RopeNode::getLeftNode() const { return this->leftNode; }

void RopeNode::setLeftNode(RopeNode *nodeToAdd) { this->leftNode = nodeToAdd; }

RopeNode *RopeNode::getRightNode() const { return this->rightNode; }

void RopeNode::setRightNode(RopeNode *nodeToAdd) {
  this->rightNode = nodeToAdd;
}

RopeNode *RopeNode::getParentNode() const { return this->parentNode; }

void RopeNode::setParentNode(RopeNode *nodeToAdd) {
  this->parentNode = nodeToAdd;
}

char *RopeNode::getCurrentStr() const { return this->currentStr; }

void RopeNode::setCurrentStr(char *newStr) { this->currentStr = newStr; }

int RopeNode::getLeafCount() const { return this->leafCount; }

void RopeNode::setLeftCount(const int newCount) { this->leafCount = newCount; }

} // namespace Model
