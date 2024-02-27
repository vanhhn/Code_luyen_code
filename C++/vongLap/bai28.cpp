#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 ll n;
 cin>>n;
 while(n>10){
  ll tmp=0;
  while(n!=0){
    tmp+=n%10;
    n/=10;
  }
  n=tmp;
 }
 cout<<n;
 return 0;
}