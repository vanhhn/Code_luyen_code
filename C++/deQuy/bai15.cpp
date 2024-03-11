#include<bits/stdc++.h>
using namespace std;
#define ll long long
int firstDigit(ll n){
  if(n<10) return n;
  return firstDigit(n/10);
}
int main(){
  ll n;
  cin>>n;
  cout<<firstDigit(n);
  return 0;
}