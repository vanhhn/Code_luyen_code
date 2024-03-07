#include<bits/stdc++.h>
using namespace std;
#define ll long long
pair<ll,ll> tim(ll n){
  ll a=2,b=-1;
  ll tmp=n;
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
      if(b<d){
        a=i;
        b=d;
      }
    }
  }
  if(n==tmp){
    return {tmp,1};
  }
  else{
    return {a,b};
  }
}
int main(){
  ll n;
  cin>>n;
  pair<ll,ll>ans=tim(n);
  cout<<ans.first<<" "<<ans.second;
  return 0;
}