//
// Created by dylan on 9/12/18.
//

#include "GVSingleLinkedList.h"
using namespace std;

GVSingleLinkedList::GVSingleLinkedList() {
    head = tail = nullptr;
}

void GVSingleLinkedList::addFirst(int newValue) {
    shared_ptr<Node> addMe = make_shared<Node>();
    addMe->data = newValue;
    addMe->next = head;

    if(head == nullptr){
        tail = addMe;
    }

    head = addMe;

}

bool GVSingleLinkedList::contains(int key) const {
    shared_ptr<Node> current = head;
    while(current != nullptr && current->data != key){
        current = current->next;
    }
    if(current == nullptr){
        return false;
    }else{
        return true;
    }
}