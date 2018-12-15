#include <iostream>
#include <algorithm>
#include "Vector.h"

using namespace std;

int main(){
    Vector v;
    v.pushBack(13);
    v.pushBack(130);
    v.pushBack(103);
    v.pushBack(13);
    v.popBack();
    v[0] = 35;
    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size() ; ++i){
        cout << v[i] << endl;
    }
    return 0;
}
