#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll ans=0;
  for(ll i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      ans+=1;
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
      if(d>1){
        cout<<"0";
        return 0;
      }
    }
  }
  if(n!=1){
    ans++;
  }
  if(ans==3){
    cout<<1;
  }
  else{
    cout<<0;
  }
  return 0;
}