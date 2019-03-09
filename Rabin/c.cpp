#include <iostream>
#include <string>
#include <algorithm>
#include "hashedString.h"

using namespace std;

int main(){
  string text, pattern;
  cin >> text >> pattern;
  int strt = text.size();
  strt -= pattern.size();
  hashedString hPattern(pattern, 1000000007);
  hashedString hWindow(text.substr(strt, pattern.size()), 1000000007);
  cout << hWindow.getString() << endl;
  int cnt = (hPattern == hWindow);
  for(int i = strt-1 ; i >=0 ; --i){
    hWindow.popBack();
    hWindow.pushFront(text[i]);
    cnt += (hPattern == hWindow);
  }
  cout << cnt << endl;
  return 0;
}
