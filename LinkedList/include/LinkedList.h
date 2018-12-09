#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Contact.h"
#include <string>

using namespace std;

class LinkedList{
public:
    LinkedList(){head  = nullptr; sz = 0;}
    int size()const;
    Contact front();
    bool empty();
    void pushFront(string num, string name = "NoName");
    void popFront();
    Contact* findByName(string name);
    Contact* findByNum(string num);
    ~LinkedList();
private:
    Contact* head;
    int sz;
};

#endif // LINKEDLIST_H
