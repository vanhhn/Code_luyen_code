#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n){
  ll ans=1;
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
     ans*=(d+1);
    }
  }
  if(n!=1){
    ans*=2;
  }
  return ans%2==1;
}
int main(){
  ll n;
  cin>>n;
  cout<<(check(n)?"YES":"NO");
  return 0;
}