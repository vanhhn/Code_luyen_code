#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long tmp=n;
  int ans=0;
  while(n!=0){
    ans++;
    n/=10;
  }
  if(tmp==0)cout<<1;
  else{
    cout<<ans;
  }
  return 0;
}