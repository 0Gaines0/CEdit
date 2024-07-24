#include "RopeNode.h"
#include <iostream>

namespace Model {

RopeNode::RopeNode() {
  this->leftNode = nullptr;
  this->rightNode = nullptr;
  this->parentNode = nullptr;
  this->currentStr = nullptr;
  this->leafCount = 0;
  this->weight = 0;
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

std::string &RopeNode::getCurrentStr() const { return this->currentStr; }

void RopeNode::setCurrentStr(std::string &newStr) { this->currentStr = newStr; }

int RopeNode::getLeafCount() const { return this->leafCount; }

void RopeNode::setLeftCount(const int newCount) { this->leafCount = newCount; }

int RopeNode::getWeight() const { return this->weight; }

void RopeNode::determineWeight() {
  if (this->currentStr != "") {
    this->weight = this->currentStr.length();
  } else {
    RopeNode *left = this->leftNode;
    int sum = left->getWeight();
    while (left->getRightNode() != nullptr) {
      sum += left->getRightNode()->getWeight();
      left = left->getRightNode();
    }
    this->weight = sum;
  }
}

} // namespace Model
