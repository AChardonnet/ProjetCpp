#include "../headers/chainedList.h"

template <class T>
chainedList<T>::chainedList() {
    head = nullptr;
    taille = 0;
}

template <class T>
int chainedList<T>::size() {
    return taille;
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
    taille++;
}

template <class T>
T chainedList<T>::operator[](int index) {
    if (index < 0 || index >= taille) {
        throw "Index out of bounds";
    }
    chainedListNode<T> *current = head;
    for (int i = 0; i < index; i++) {
        current = current->getNext();
    }
    return current->getData();
}

