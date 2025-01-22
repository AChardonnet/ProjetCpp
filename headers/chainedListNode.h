#ifndef CHAINEDLISTNODE_H
#define CHAINEDLISTNODE_H

template <class T>
class chainedListNode {
    private:
        T data;
        chainedListNode *next;
    public:
        chainedListNode(T data);
        T getData();
        chainedListNode *getNext();
        void setNext(chainedListNode *next);
};

#endif