#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0;
  for(int i=3;i<=n;i+=3){
    ans+=i;
  }
  cout<<ans;
  return 0;
}