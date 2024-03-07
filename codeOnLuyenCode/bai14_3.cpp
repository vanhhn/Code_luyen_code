#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n;
  cin>>n;
  for(ll i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
      if(n!=1){
        cout<<i<<"^"<<d<<" * ";
      }
      else{
        cout<<i<<"^"<<d;
      }
    }
  }
  if(n!=1){
    cout<<n<<"^1";
  }
  return 0;
}