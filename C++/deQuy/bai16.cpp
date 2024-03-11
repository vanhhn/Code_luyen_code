#include<bits/stdc++.h>
using namespace std;
#define ll long long
int chuSoMax(ll n){
  if(n<10){
    return n;
  }
  int x=n%10;
  return max(x,chuSoMax(n/10));
}
int chuSoMin(ll n){
  if(n<10){
    return n;
  }
  int x=n%10;
  return min(x,chuSoMin(n/10));
}
int main(){
  ll n;
  cin>>n;
  cout<<chuSoMax(n)<<" "<<chuSoMin(n);
  return 0;
}