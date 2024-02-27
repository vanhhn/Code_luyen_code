#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int  px=n;
  int py=n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<n*2;j++){
      if(j>=px&&j<=py){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    px--;
    py++;
    cout<<"\n";
  }
  
  return 0;
}