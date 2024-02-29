#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll n){
  ll x=(ll)(sqrt(n));
  if(x*x==n||(x+1)*(x+1)==n){
    return 1;
  }
  return 0;
}
int main(){
  ll n;
  cin>>n;
  cout<<((check(n)?"YES":"NO"));
  return 0;
}