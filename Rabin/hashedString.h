#include <deque>
#include <string>
#include <iostream>

using namespace std;

typedef long long ll;

class hashedString{
public:
  hashedString(ll m){
    mod = m;
    modInv = power(base, mod-2);
    hashValue = 0;
  }
  hashedString(string s, ll m){
    mod = m;
    modInv = power(base, mod-2);
    hashValue = 0;
    for(char c : s)
      pushBack(c);
  }
  void pushBack(char c);
  void pushFront(char c);
  void popBack();
  void popFront();
  string getString(){return string(str.begin(), str.end());}
  bool operator == (const hashedString s)const;
  int size(){return str.size();}
  ll getHash()const{return hashValue;}
private:
  ll power(ll b, ll p);
  inline ll fixMod(ll a, ll m){
    return (a%m + m)%m;
  }
  deque<char> str;
  ll hashValue;
  ll mod;
  ll modInv;
  ll base = 131;
};
