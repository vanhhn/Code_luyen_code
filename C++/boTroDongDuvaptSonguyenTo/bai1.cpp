#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll dem(ll n){
  ll d=0;
  for(ll i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      d++;
      while(n%i==0){
        n/=i;
      }
    }
  }
  if(n!=1){
    d++;
  }
  return d;
}
int main(){
  ll n;
  cin>>n;
  cout<<dem(n);
  return 0;
}