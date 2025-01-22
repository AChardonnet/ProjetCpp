#ifndef CHAINEDLIST_H
#define CHAINEDLIST_H

#include "chainedListNode.h"

template <class T>
class chainedList {
    private:
        chainedListNode<T> *head;
        int taille;
    public:
        chainedList();
        int size();
        void push(T data);
        T operator[](int index);
};

#endif