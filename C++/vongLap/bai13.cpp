#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int n;
  cin>>n;
  ll ans=0;
  for(int i=2;i<=2*n;i+=2){
    ans+=i;
  }
  cout<<ans;
  return 0;
}