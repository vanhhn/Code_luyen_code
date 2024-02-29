#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll a,b;
  cin>>a>>b;
  ll x=ceil(sqrt(a));
  ll y=floor(sqrt(b));
  for(ll i=x;i<=y;i++){
    cout<<i*i<<" ";
  }
  return 0;
}