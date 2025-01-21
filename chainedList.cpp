#include "chainedList.h"

chainedList::chainedList() {
    head = nullptr;
    size = 0;
}

int chainedList::size() {
    return size;
}

void chainedList::push(auto data) {
    chainedListNode *newNode = new chainedListNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        chainedListNode *current = head;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(newNode);
    }
    size++;
}

auto chainedList::operator[](int index) {
    if (index < 0 || index >= size) {
        throw "Index out of bounds";
    }
    chainedListNode *current = head;
    for (int i = 0; i < index; i++) {
        current = current->getNext();
    }
    return current->getData();
}
