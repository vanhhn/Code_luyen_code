#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll phiHamEluer(ll n){
  ll ans=n;
  for(ll i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
       ans=ans*(i-1)/i;
      while(n%i==0){
        n/=i;
      }
    }
  }
  if(n!=1){
    ans=ans*(n-1)/n;
  }
  return ans;
}
int main(){
  ll n;
  cin>>n;
  cout<<phiHamEluer(n);
  return 0;
}