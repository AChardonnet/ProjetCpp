#include "chainedListNode.h"
#include "Adherent.h"
#include "Bibliotheque.h"

template <class T>
chainedListNode<T>::chainedListNode(T data) {
    this->data = data;
    this->next = nullptr;
}

template <class T>
T chainedListNode<T>::getData() {
    return data;
}

template <class T>
chainedListNode<T>* chainedListNode<T>::getNext() {
    return next;
}

template <class T>
void chainedListNode<T>::setNext(chainedListNode *next) {
    this->next = next;
}

template class chainedListNode<Bibliotheque*>;
template class chainedListNode<Adherent*>;
