#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long ans=0;
  for(int i=1;i<=2*n-1;i+=2){
    ans+=i;
  }
  cout<<ans;
  return 0;
}