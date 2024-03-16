#include<bits/stdc++.h>
using namespace std;
#define ll long long
int isSphenicNumber(ll n){
  int cnt=0;
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      cnt++;
      int d=0;
      while(n%i==0){
        d++;
        n/=i;
      }
      if(d>1){
        return 0;
      }
    }
  }
  if(n!=1){
    cnt++;
  }
  return cnt==3;
}
int main(){
  ll n;
  cin>>n;
  cout<<isSphenicNumber(n);
  return 0;
}