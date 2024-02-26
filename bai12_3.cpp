#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main(){
  int t;
  cin>>t;
  ll ans=1;
  for(int i=1;i<=t;i++){
    int x,y;
    cin>>x>>y;
    ans*=(y+1);
    ans%=mod;
  }
  cout<<ans;
  return 0;
}