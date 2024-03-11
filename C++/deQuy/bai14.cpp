#include<bits/stdc++.h>
using namespace std;
#define ll long long
int soChuSo(ll n){
  if(n<10) return 1;
  return 1+soChuSo(n/10);
}
int main(){
  ll n;
  cin>>n;
  cout<<soChuSo(n);
  return 0;
}