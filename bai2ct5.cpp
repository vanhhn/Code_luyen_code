#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int &x:a)cin>>x;
  cout<<a[0]<<" ";
  for(int i=1;i<n;i++){
    int ok=1;
    for(int j=i-1;j>=0;j--){
      if(a[i]<=a[j]){
        ok=0;
        break;
      }
    }
    if(ok){
      cout<<a[i]<<" ";
    }
  }
  return 0;
}