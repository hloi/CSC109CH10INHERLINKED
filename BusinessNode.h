//
// Created by hloi on 3/30/2022.
//

#ifndef CSC109CH10INHERLINKED_BUSINESSNODE_H
#define CSC109CH10INHERLINKED_BUSINESSNODE_H
#include <string>
#include <sstream>
using std::string;
using std::ostream;

class BusinessNode {

private:
    string name;
    string address;
    BusinessNode* nextNodePtr;
public:

    BusinessNode();

    BusinessNode(string name, string address, BusinessNode* nextNodePtr = nullptr);

    virtual ~BusinessNode();

    const string &getName() const;

    void setName(const string &name);

    const string &getAddress() const;

    void setAddress(const string &address);

    BusinessNode *getNextNodePtr() const;

    void setNextNodePtr(BusinessNode *nextNodePtr);

    virtual string getDescription() const;

    friend ostream& operator<<(ostream& out, const BusinessNode& node);

    bool operator<(BusinessNode& node);  // sort by business name

};


#endif //CSC109CH10INHERLINKED_BUSINESSNODE_H
