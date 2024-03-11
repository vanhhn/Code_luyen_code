#include<bits/stdc++.h>
using namespace std;
#define ll long long
void inTraiQuaPhai(ll n){
  if(n<10){
    cout<<n<<" ";
    return ;
  }
  inTraiQuaPhai(n/10);
  cout<<n%10<<" ";
}
void inPhaiQuaTrai(ll n){
  if(n<10){
    cout<<n;
    return ;
  }
  cout<<n%10<<" ";
  inPhaiQuaTrai(n/10);
}
int main(){
  ll n;
  cin>>n;
  inTraiQuaPhai(n);
  cout<<"\n";
  inPhaiQuaTrai(n);
  return 0;
}