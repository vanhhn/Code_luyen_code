#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll ans=0;
  while(n!=0){
    int cs=n%10;
    if(cs==2||cs==3||cs==5||cs==7){
      ans++;
    }
    n/=10;
  }
  cout<<ans;
  return 0;
}