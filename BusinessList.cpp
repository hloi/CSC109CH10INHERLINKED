//
// Created by hloi on 3/30/2022.
//
#include <iostream>
#include "BusinessList.h"

using namespace std;

BusinessNode *BusinessList::getHead() const {
    return head;
}

void BusinessList::setHead(BusinessNode *head) {
    BusinessList::head = head;
}

BusinessNode *BusinessList::getTail() const {
    return tail;
}

void BusinessList::setTail(BusinessNode *tail) {
    BusinessList::tail = tail;
}

BusinessList::BusinessList() {
    head = nullptr;
    tail = nullptr;
}

void BusinessList::push_back(BusinessNode *node) {
    if (head == nullptr) {
        head = node;
        tail = node;
    }
    else {
        tail->setNextNodePtr(node);
        tail = node;
    }
}

ostream &operator<<(ostream &out, const BusinessList &list1) {
    BusinessNode* currObj = list1.getHead();
    while (currObj != nullptr) {
        out << *currObj << endl;
        currObj = currObj->getNextNodePtr();
    }
    return out;
}

BusinessList::~BusinessList() {
    delete head;
}
