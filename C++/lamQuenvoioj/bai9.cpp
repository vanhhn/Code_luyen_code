#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  int i=1;
  while(i<=3){
    n/=10;
    i++;
  }
  cout<<n;
  return 0;
}