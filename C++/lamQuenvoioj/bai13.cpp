#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z,t;
  cin>>x>>y>>z>>t;
  cout<<max(x,y)<<"\n"<<min(z,t)<<"\n"<<max({x,y,z})<<"\n"<<min({x,y,z,t});
  return 0;
}