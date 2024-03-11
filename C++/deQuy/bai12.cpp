#include<bits/stdc++.h>
using namespace std;
#define ll long long
void decimalToHexa(ll n){
  if(n==0){
    return ;
  }
  decimalToHexa(n/16);
  int x=n%16;
  if(x>=0&&x<=9){
    cout<<x;
  }
  else{
    cout<<(char)(x+55);
  }
}
int main(){
   ll n;
   cin>>n;
   if(n==0){
    cout<<0;
   }
   else{
    decimalToHexa(n);
   }
   return 0;
}