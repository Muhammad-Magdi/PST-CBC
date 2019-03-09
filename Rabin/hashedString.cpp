#include "hashedString.h"

//(a+b)%m = (a%m + b%m)%m
//(a*b)%m = ((a%m) * (b%m))%m
void hashedString :: pushBack(char c){  //123, 5 => 123*10 + 5
  hashValue = ((hashValue*base)%mod + c)%mod;
  str.push_back(c);
}

void hashedString :: pushFront(char c){ //123, 5 => 5*10^3 + 123
  hashValue = ((c*power(base, str.size()))%mod + hashValue)%mod;
  str.push_front(c);
}

void hashedString :: popBack(){ //123 => 120+3
  hashValue = (fixMod(hashValue - str.back(), mod)*modInv)%mod;
  str.pop_back();
}

void hashedString :: popFront(){  //123 => 23
  ll p = power(base, int(str.size())-1)%mod;
  hashValue = fixMod(hashValue-(str.front()*p)%mod, mod);
  str.pop_front();
}

ll hashedString :: power(ll b, ll p){
  if(!p)  return 1;
  ll ret = power(b, p/2)%mod;
  /*
    if(p%2 != 0)  return (((ret*ret)%mod)*b)%mod;
    else return (ret*ret)%mod;
  */
  return (((ret*ret)%mod)* (p%2!=0 ? b : 1))%mod;
}

bool hashedString :: operator == (const hashedString s)const{
  return hashValue == s.getHash();
}
