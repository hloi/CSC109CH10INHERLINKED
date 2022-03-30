//
// Created by hloi on 3/30/2022.
//
#include <iostream>
#include "RestaurantNode.h"

using namespace std;

int RestaurantNode::getRating() const {
    return rating;
}

void RestaurantNode::setRating(int rating) {
    RestaurantNode::rating = rating;
}

RestaurantNode::RestaurantNode(string name, string address, int rating) : BusinessNode(name, address) {
    cout << "Restaurant non default constructor"  << endl;
    this->rating = rating;
}

RestaurantNode::RestaurantNode() {
    cout << "Restaurant default constructor"  << endl;
}

RestaurantNode::~RestaurantNode() {
    cout << "Restaurant destructor"  << endl;
}

string RestaurantNode::getDescription() const {
    string s = BusinessNode::getDescription();
    s = s + " " + to_string(rating);
    return s;
}
