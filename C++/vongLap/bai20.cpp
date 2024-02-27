#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int voChai=n/28;
  int ans=voChai;
  while(voChai>=3){
      ans++;
      voChai-=2;
  }
  cout<<ans;
  return 0;
}