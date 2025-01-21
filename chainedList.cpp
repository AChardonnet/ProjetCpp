#include "chainedList.h"

template <class T>
chainedList<T>::chainedList() {
    head = nullptr;
    size = 0;
}

template <class T>
int chainedList<T>::size() {
    return size;
}

template <class T>
void chainedList<T>::push(T data) {
    chainedListNode<T> *newNode = new chainedListNode<T>(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        chainedListNode<T> *current = head;
        while (current->getNext() != nullptr) {
            current = current->getNext();
        }
        current->setNext(newNode);
    }
    size++;
}

template <class T>
T chainedList<T>::operator[](int index) {
    if (index < 0 || index >= size) {
        throw "Index out of bounds";
    }
    chainedListNode<T> *current = head;
    for (int i = 0; i < index; i++) {
        current = current->getNext();
    }
    return current->getData();
}

// Explicit template instantiation
template class chainedList<int>;
template class chainedList<Bibliotheque*>;
template class chainedList<Adherent*>;
