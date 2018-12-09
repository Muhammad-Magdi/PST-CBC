#include "Contact.h"
#include <string>
using namespace std;

Contact::Contact(string _num, string _name){
    num = _num;
    name = _name;
    next = nullptr;
}

Contact :: Contact(string _num, Contact* _next){
    num = _num;
    next = _next;
    name = "NoName";
}

Contact* Contact :: getNext()const{
    return next;
}

void Contact:: setNext(Contact* _next){
    next = _next;
}

Contact :: Contact(string _num, string _name, Contact* _next){
    name = _name;
    num = _num;
    next = _next;
}

string Contact :: getName()const{
    return name;
}

void Contact :: setName(string _name){
    name = _name;
}
string Contact :: getNum()const{
    return num;
}
