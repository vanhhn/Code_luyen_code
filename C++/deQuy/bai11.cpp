#include<bits/stdc++.h>
using namespace std;
#define ll long long
void decimalToBinary(ll n){
     if(n==0){
      return ;
     }
     decimalToBinary(n/2);
     cout<<n%2;
}
int main(){
  ll n;
  cin>>n;
  if(n==0) cout<<0;
  else{
  decimalToBinary(n);
  }
  return 0;
}