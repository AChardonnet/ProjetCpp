#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
class chainedListNode {
    private:
        auto data;
        chainedListNode *next;
    public:
        chainedListNode(auto data);
        auto getData();
        chainedListNode *getNext();
        void setNext(chainedListNode *next);
};
#endif