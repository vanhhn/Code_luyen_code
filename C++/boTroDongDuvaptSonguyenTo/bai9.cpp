#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll power(int a,int b,int m){
  if(b==0) return 1;
  ll res=power(a,b/2,m);
  if(b%2==0){
    return ((res%m)*(res%m))%m;
  }
  else{
    return ( ((res%m)*(res%m))%m*a%m)%m;
  }
}
int main(){
  int n,m,k;
  cin>>n>>m>>k;
  ll ans=power(n,m,pow(10,k));
  cout<<ans;
  return 0;
}