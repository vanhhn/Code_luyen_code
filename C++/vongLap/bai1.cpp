#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=3;i<=n;i+=3){
    cout<<i<<" ";
  }
  cout<<"\n";
  for(int i=0;i<n;i+=15){
    cout<<i<<" ";
  }
  cout<<"\n";
  for(int i=n;;i++){
    if(i%7==0){
      cout<<i<<"\n";
      break;
    }
  }
  for(int i=n;;i--){
    if(i%9==0){
      cout<<i<<"\n";
      break;
    }
  }
  for(int i=1;i<=2*n-1;i+=2){
    cout<<i<<" ";
  }
  return 0;
}