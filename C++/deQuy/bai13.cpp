#include<bits/stdc++.h>
using namespace std;
#define ll long long
int tinhTong(ll n){
  if(n<10) return n;
  return n%10+tinhTong(n/10);
}
int main(){
  ll n;
  cin>>n;
  cout<<tinhTong(n);
  return 0;
}