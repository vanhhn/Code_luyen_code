#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll a,b;
  cin>>a>>b;
  ll c=__gcd(a,b);
  ll d=a/c*b;
  cout<<d<<" "<<c;
  return 0;
}