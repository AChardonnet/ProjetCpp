#include "chainedListNode.h"

chainedListNode::chainedListNode(auto data) {
    this->data = data;
    this->next = nullptr;
}

auto chainedListNode::getData() {
    return data;
}

chainedListNode* chainedListNode::getNext() {
    return next;
}

void chainedListNode::setNext(chainedListNode *next) {
    this->next = next;
}
