#ifndef VECTOR_H
#define VECTOR_H


class Vector{
    public:
        Vector();
        void pushBack(int v);
        void popBack();
        bool empty();
        int size();
        int capacity();
        int find(int v);
        void insert(int idx, int v);
        void erase(int idx);
        int* begin();
        int* end();
        int& operator[](const int& idx);
        int& valueAt(int idx);
        ~Vector();
    private:
        int sz, cp;
        void duplicate();
        int* A;
};

#endif // VECTOR_H
