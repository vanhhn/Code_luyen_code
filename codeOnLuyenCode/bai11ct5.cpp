#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (int)(1e9+7)
int main(){
  int n;
  cin>>n;
  ll a[n],ans=0;
  for(ll &x:a)cin>>x;
  sort(a,a+n);
  for(int i=0;i<n;i++){
    ans=((ans%mod)+(a[i]*i)%mod)%mod;
  }
  cout<<ans;
  return 0;
}