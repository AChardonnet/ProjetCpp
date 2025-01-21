#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include chainedListNode.h
class chainedList {
    private:
        chainedListNode *head;
        int size;
    public:
        chainedList();
        int size();
        void push(auto data);
        auto operator[](int index);
};
#endif