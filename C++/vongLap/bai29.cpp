#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  long long ans=0;
  for(int i=1;i<=n;i++){
    long long tmp=1;
    for(int j=1;j<=i;j++){
       tmp*=j;
    }
    ans+=tmp;
  }
  cout<<ans;
  return 0;
}