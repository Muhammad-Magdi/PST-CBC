#include "LinkedList.h"
#include "Contact.h"
#include <string>

using namespace std;

void LinkedList :: pushFront(string _num, string _name){
    Contact* newFront = new Contact(_num, _name, head);
    head = newFront;
    ++sz;
}

void LinkedList :: popFront(){
    Contact* oldFront = head;
    head = head->getNext();
    --sz;
    delete oldFront;
}

bool LinkedList :: empty(){
    return head == nullptr;
}

LinkedList :: ~LinkedList(){
    while(!empty()) popFront();
}

Contact LinkedList :: front(){
    return *head;
}

Contact* LinkedList :: findByName(string name){
    Contact* cur = head;
    while(cur != nullptr && cur->getName() != name){
        cur = cur->getNext();
    }
    return cur;
}

Contact* LinkedList :: findByNum(string num){
    Contact* cur = head;
    while(cur != nullptr && cur->getNum() != num){
        cur = cur->getNext();
    }
    return cur;
}

int LinkedList :: size()const{
    return sz;
}
