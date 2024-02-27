#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll a,b;
  cin>>a>>b;
  ll x=min(a,b);
  ll ans=1;
  for(int i=1;i<=x;i++){
    ans*=i;
  }
  cout<<ans;
  return 0;
}