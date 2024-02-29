#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll n){
  ll sum=1,tmp=n;
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
      sum*=(pow(i,d+1)-1)/(i-1);
    }
  }
  if(n!=1){
    sum*=(n+1);
  }
  return sum==2*tmp;
}
int main(){
  ll n;
  cin>>n;
  cout<<(check(n)?"YES":"NO");
  return 0;
}