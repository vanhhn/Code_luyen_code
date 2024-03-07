#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[93];
void sinh()
{
  a[0] = 0;
  a[1] = 1;
  for (int i = 2; i < 93; i++)
  {
    a[i] = a[i - 1] + a[i - 2];
  }
}
int checkFibo(ll n){
  int l=0,r=92;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]==n)return 1;
    else if (a[m]<n){
      l=m+1;
    }
    else{
      r=m-1;
    }
  }
  return 0;
}
int main(){
  sinh();
  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    if(checkFibo(n)){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}