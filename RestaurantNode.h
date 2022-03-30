//
// Created by hloi on 3/30/2022.
//

#ifndef CSC109CH10INHERLINKED_RESTAURANTNODE_H
#define CSC109CH10INHERLINKED_RESTAURANTNODE_H
#include "BusinessNode.h"

class RestaurantNode : public BusinessNode {
public:

private:
    int rating;
public:

    RestaurantNode();

    RestaurantNode(string name, string address, int rating);

    virtual ~RestaurantNode();

    int getRating() const;

    void setRating(int rating);

    string getDescription() const;

};


#endif //CSC109CH10INHERLINKED_RESTAURANTNODE_H
