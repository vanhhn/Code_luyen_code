#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,u1,d;
  cin>>n>>u1>>d;
  ll ans=n*u1+(n-1)*n/2*d;
  cout<<ans;
  return 0;
}