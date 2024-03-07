#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll a,ll b){
  return a/__gcd(a,b)*b;
}
ll sovle(int n,int x,int y,int z){
  ll tmp=lcm(lcm(x,y),z);
  ll m=(ll)pow(10,n-1);
  ll res=(m+tmp-1)/tmp*tmp;
  if(res<(ll)pow(10,n)){
    return res;
  }
  return -1;
}
int main(){
  int x,y,z,n;
  cin>>x>>y>>z>>n;
  cout<<sovle(n,x,y,z);
  return 0;
}