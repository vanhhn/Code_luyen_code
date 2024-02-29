#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n,p;
  cin>>n>>p;
  ll ans=0;
  for(ll i=p;i<=n;i*=p){
    ans+=n/i;
  }
  cout<<ans;
  return 0;
}