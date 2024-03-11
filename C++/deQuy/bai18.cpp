#include<bits/stdc++.h>
using namespace std;
#define ll long long
int tongChuSoChan(ll n){
  if(n<10){
    return (n%2==0?n:0);
  }
  int x=n%10;
  if(x%2==0){
    return x+tongChuSoChan(n/10);
  }
  else{
    return tongChuSoChan(n/10);
  }
}
int tongChuSoLe(ll n){
  if(n<10){
    return (n%2==1?n:0);
  }
  int x=n%10;
  if(x%2==1){
    return x+tongChuSoLe(n/10);
  }
  else{
    return tongChuSoLe(n/10);
  }
}
int main(){
   ll n;
   cin>>n;
   cout<<tongChuSoChan(n)<<"\n"<<tongChuSoLe(n);
   return 0;
}