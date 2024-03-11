#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool checkChuSoChan(ll n){
  if(n<10){
    return n%2==0;
  }
  int x=n%10;
  if(x%2==1){
    return false;
  }
  return checkChuSoChan(n/10);
}
int main(){
   ll n;
   cin>>n;
   cout<<(checkChuSoChan(n)==true?"YES":"NO");
   return 0;
}