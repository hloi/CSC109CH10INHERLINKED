//
// Created by hloi on 3/30/2022.
//
#include <iostream>
#include "BusinessNode.h"

using namespace std;

const string &BusinessNode::getName() const {
    return name;
}

void BusinessNode::setName(const string &name) {
    BusinessNode::name = name;
}

const string &BusinessNode::getAddress() const {
    return address;
}

void BusinessNode::setAddress(const string &address) {
    BusinessNode::address = address;
}

BusinessNode *BusinessNode::getNextNodePtr() const {
    return nextNodePtr;
}

void BusinessNode::setNextNodePtr(BusinessNode *nextNodePtr) {
    this->nextNodePtr = nextNodePtr;
}

BusinessNode::BusinessNode() {
    cout << "default constructor" << endl;
    nextNodePtr = nullptr;
}

BusinessNode::BusinessNode(string name, string address, BusinessNode *nextNodePtr) {
    cout << "non default constructor"  << endl;
    this->name = name;
    this->address = address;
    this->nextNodePtr = nextNodePtr;
}

string BusinessNode::getDescription() const {
    return name + " " + address;
}

BusinessNode::~BusinessNode() {
    cout << "Business destructor"  << endl;
    delete nextNodePtr;
}

ostream &operator<<(ostream &out, const BusinessNode &node) {
    out << node.getDescription();
    return out;
}
