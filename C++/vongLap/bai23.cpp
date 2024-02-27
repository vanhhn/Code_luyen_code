#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i+j<=n){
        cout<<" ";
      }
      else{
        cout<<"*";
      }
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j>=i){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j==1||i==j||i==n){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}