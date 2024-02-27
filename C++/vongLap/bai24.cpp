#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n*n;i++){
    cout<<i<<" ";
    if(i%n==0){
    cout<<"\n";
    }
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n+i-1;j++){
      cout<<j<<" ";
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i+j<=n){
        cout<<"~";
      }
      else{
        cout<<i;
      }
    }
    cout<<"\n";
  }
  cout<<"\n";
  for(int i=1;i<=n;i++){
    int k=i;
    for(int j=1;j<=i;j++){
       cout<<k<<" ";
       k=k+(n-j);
    }
    cout<<"\n";
  }
  return 0;
}