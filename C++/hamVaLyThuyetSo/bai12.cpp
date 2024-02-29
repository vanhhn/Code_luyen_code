#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll tongUocSo(ll n){
  ll sum=1;
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
  return sum;
}
int main(){
  ll n;
  cin>>n;
  cout<<tongUocSo(n);
  return 0;
}