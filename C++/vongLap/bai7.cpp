#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll ans=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      ans+=i;
      if(i!=n/i){
        ans+=n/i;
      }
    }
  }
  cout<<ans;
  return 0;
}