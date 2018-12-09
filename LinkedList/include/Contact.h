#ifndef CONTACT_H
#define CONTACT_H
#include <string>

using namespace std;

class Contact{
    public:
        Contact(string _num);
        Contact(string _num, string _name);
        Contact(string _num, Contact* _next);
        Contact(string _num, string _name = "NoName", Contact* _next = nullptr);
        string getName()const;
        Contact* getNext()const;
        void setNext(Contact* _next);
        void setName(string _name);
        string getNum()const;
    private:
        string name;
        string num;
        Contact* next;
};

#endif // CONTACT_H
