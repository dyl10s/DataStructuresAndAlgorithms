//
// Created by dylan on 9/12/18.
//

#ifndef LINKEDLIST_GVSINGLELINKEDLIST_H
#define LINKEDLIST_GVSINGLELINKEDLIST_H

#include <memory>

using namespace std;

class GVSingleLinkedList {

    class Node; // forward declaration

public:
    shared_ptr<Node> head;
    shared_ptr<Node> tail;

    GVSingleLinkedList();
    void addFirst(int);
    bool contains (int) const;
private:
    class Node{
    public:
        int data;
        shared_ptr<Node> next;
    };

};


#endif //LINKEDLIST_GVSINGLELINKEDLIST_H
