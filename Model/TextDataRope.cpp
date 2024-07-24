#include "TextDataRope.h"
#include "RopeNode.h"

namespace Model {

TextDataRope::TextDataRope() {}

TextDataRope::~TextDataRope() {
  // delete all data in the Rope
}

void TextDataRope::pushBack(char *charToAdd) {
  RopeNode *newNode = new RopeNode();
  std::string newStr(charToAdd);
  newNode->setCurrentStr(newStr);
  if (this->rootNode == nullptr) {
    this->rootNode = newNode;
  } else {
    RopeNode *current = this->rootNode;
    while (current->getNode(NodeDirection::Right) != nullptr) {
      current = current->getNode(NodeDirection::Right);
    }
    current->setNode(NodeDirection::Right, newNode);
  }
}

void TextDataRope::popBack() {
  if (this->rootNode != nullptr) {
    RopeNode *current = this->rootNode;
    while (current->getNode(NodeDirection::Right) != nullptr) {
      current = current->getNode(NodeDirection::Right);
    }
    RopeNode *parent = current->getNode(NodeDirection::Parent);
    if (parent == nullptr) {
      delete this->rootNode;
      this->rootNode = nullptr;
    } else {
      parent->setNode(NodeDirection::Right, nullptr);
      delete current;
    }
  }
}

std::stack<RopeNode *> TextDataRope::collectLeaves() {
  std::stack<RopeNode *> leaves;
  if (this->rootNode == nullptr) {
    return leaves;
  }
  std::stack<RopeNode *> stack;
  stack.push(this->rootNode);
  while (!stack.empty()) {
    RopeNode *node = stack.top();
    stack.pop();
    if (node->getNode(NodeDirection::Left) == nullptr &&
        node->getNode(NodeDirection::Right) == nullptr) {
      leaves.push(node);
    } else {
      if (node->getNode(NodeDirection::Right) != nullptr) {
        stack.push(node->getNode(NodeDirection::Right));
      }
      if (node->getNode(NodeDirection::Left) != nullptr) {
        stack.push(node->getNode(NodeDirection::Left));
      }
    }
  }
  return leaves;
}

void TextDataRope::insert(const int idx, char *charToAdd) {
  RopeNode *leftPart;
  RopeNode *rightPart;
  this->split(this->rootNode, idx, leftPart, rightPart);
  RopeNode *newNode = new RopeNode();
  std::string newStr(charToAdd);
  newNode->setCurrentStr(newStr);
  RopeNode *newRoot = new RopeNode();
  newRoot->setNode(NodeDirection::Left, leftPart);
  newRoot->setNode(NodeDirection::Right, newNode);
  RopeNode *finalRoot = new RopeNode();
  finalRoot->setNode(NodeDirection::Left, newRoot);
  finalRoot->setNode(NodeDirection::Right, rightPart);
  this->rootNode = finalRoot;
}

void TextDataRope::split(RopeNode *node, int index, RopeNode *&leftPart,
                         RopeNode *&rightPart) {
  if (node == nullptr) {
    leftPart = nullptr;
    rightPart = nullptr;
    return;
  }
  int leftWeight = node->getWeight();
  if (index < leftWeight) {
    RopeNode *leftChildLeft;
    RopeNode *rightChildRight;
    this->split(node->getNode(NodeDirection::Left), index, leftChildLeft,
                rightChildRight);
    leftPart = new RopeNode();
    leftPart->setNode(NodeDirection::Left, leftChildLeft);
  }
}

} // namespace Model
