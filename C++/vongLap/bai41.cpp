#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=9;j++){
      cout<<i<<" * "<<j<<" = "<<i*j<<"\n";
    }
    cout<<"\n";
  }
  return 0;
}