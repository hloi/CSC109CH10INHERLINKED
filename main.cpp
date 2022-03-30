#include <iostream>
#include <vector>
#include "BusinessNode.h"
#include "RestaurantNode.h"
#include "BusinessList.h"

using namespace std;

int main() {

//    vector<BusinessNode*> vect1;

    BusinessNode* bus1 = new BusinessNode("Fish market", "1000 West Boylston");
    RestaurantNode* rest1 = new RestaurantNode("Take a Break cafe", "5 main street", 3);

    RestaurantNode* rest2 = new RestaurantNode("QCC cafe", "670 West Boylston", 5);

//    cout << bus1->getDescription() << endl;
//    cout << rest1->getDescription() << endl;
//    cout << rest2->getDescription() << endl;

//    vect1.push_back(bus1);
//    vect1.push_back(rest1);
//    vect1.push_back(rest2);
//    cout << *vect1.at(0) << endl;
//
//    delete vect1.at(0);

    BusinessList list1;
    list1.push_back(bus1);
    list1.push_back(rest1);
    list1.push_back(rest2);

    cout << list1;

    return 0;
}
