#include <iostream>

#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList li;
    li.pushFront("1315", "Ahmed");
    li.pushFront("1315");
    li.popFront();
    if(li.findByName("Ahed") == nullptr)
        cout << "Ahmed Not Found" << endl;
    else
        cout << li.findByName("Ahmed")->getNum() << endl;
    return 0;
}
