#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<"*";
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==1||i==n||j==1||j==n){
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
      if(i==1||i==n||j==1||j==n){
        cout<<"*";
      }
      else{
        cout<<"#";
      }
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==1||i==n||j==1||j==n){
        cout<<i<<" ";
      }
      else{
        cout<<"  ";
      }
    }
    cout<<"\n";
  }
}