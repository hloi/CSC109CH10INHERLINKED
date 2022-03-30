//
// Created by hloi on 3/30/2022.
//

#ifndef CSC109CH10INHERLINKED_BUSINESSLIST_H
#define CSC109CH10INHERLINKED_BUSINESSLIST_H
#include "BusinessNode.h"
#include "RestaurantNode.h"

class BusinessList {

private:
    BusinessNode* head;
    BusinessNode* tail;

public:
    BusinessList();

    ~BusinessList();

    BusinessNode *getHead() const;

    void setHead(BusinessNode *head);

    BusinessNode *getTail() const;

    void setTail(BusinessNode *tail);

    void push_back(BusinessNode* node);

    void insert_sort(BusinessNode* node);

    friend ostream& operator<<(ostream& out, const BusinessList& list1);

};


#endif //CSC109CH10INHERLINKED_BUSINESSLIST_H
