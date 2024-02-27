#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0;
  int d=-1;
  for(int i=1;i<=n;i++){
      ans+=i*d;
      d*=-1;
  }
  cout<<ans;
  return 0;
}