#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll n){
  ll x=(ll)pow(n,1.0/2);
  if(x*x==n||(x+1)*(x+1)==n){
    return 1;
  }
  return 0;
}
int main(){
    ll n;
    cin>>n;
    if(check(n)){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    return 0;
}