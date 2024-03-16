#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power(ll a,ll n){
  if(n==0) return 1;
  ll res=power(a,n/2);
  if(n%2==0){
    return ((res%mod)*(res%mod))%mod;
  }
  else{
    return (((res%mod)*(res%mod))%mod*(a%mod))%mod;
  }
}
ll daoNguoc(ll n){
  ll rev=0;
  while(n!=0){
    rev=rev*10+n%10;
    n/=10;
  }
  return rev;
}
int main(){
    ll a;
    cin>>a;
    ll n=daoNguoc(a);
    cout<<power(a,n);
    return 0;
}