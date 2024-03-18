#include<bits/stdc++.h>
using namespace std;
#define ll long long
string decimalToBinary(ll n){
  string s="";
  while(n!=0){
    s=to_string(n%2)+s;
    n/=2;
  }
  return s;
}
int main(){
  ll n;
  cin>>n;
  cout<<decimalToBinary(n);
  return 0;
}