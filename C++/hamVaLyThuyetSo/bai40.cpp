#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  if(n%2==0){
    cout<<n/2;
  }
  else{
    cout<<n-n/2;
  }
  return 0;
}