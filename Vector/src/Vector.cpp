#include "Vector.h"

Vector::Vector(){
    A = new int[1];
    cp = 1;
    sz = 0;
}

void Vector :: duplicate(){
    cp *= 2;
    int* tmp = new int[cp];
    for(int i = 0 ; i < sz ; ++i)       //Copy
        tmp[i] = A[i];
    delete [] A;
    A = tmp;
}

void Vector :: pushBack(int v){
    if(sz == cp)    duplicate();
    A[sz++] = v;
}

void Vector :: popBack(){
    --sz;
}

bool Vector :: empty(){
    return sz==0;
}

//1 2 3 4 5

int Vector :: find(int v){
    for(int i = 0 ; i < sz ; ++i)
        if(A[i] == v)   return i;
    return sz;
}

void Vector :: insert(int idx, int v){
    if(cp == sz)    duplicate();
    for(int i = sz ; i > idx ; --i)
        A[i] = A[i-1];
    A[idx] = v;
    ++sz;
}

void Vector :: erase(int idx){
    --sz;
    for(int i = idx ; i < sz ; ++i)
        A[i] = A[i+1];
}

int* Vector :: begin(){
    return A;
}

int Vector :: size(){
    return sz;
}

int* Vector :: end(){
    return A+sz;
}

int& Vector :: operator[](const int& idx){
    return A[idx];
}

int& Vector :: valueAt(int idx){
    return A[idx];
}

Vector :: ~Vector(){
    delete [] A;
}
