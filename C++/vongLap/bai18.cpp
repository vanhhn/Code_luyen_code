#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll ans=0;
  while(n!=0){
    ans+=n%10;
    n/=10;
  }
  cout<<ans;
  return 0;
}