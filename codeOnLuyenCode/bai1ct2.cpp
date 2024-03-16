#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tongUoc(ll n){
  ll ans=1;
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
      ans*=(pow(i,d+1)-1)/(i-1);
    }
  }
  if(n!=1){
    ans*=(n+1);
  }
  return ans;
}
int main(){
  ll n;
  cin>>n;
  cout<<tongUoc(n);
  return 0;
}