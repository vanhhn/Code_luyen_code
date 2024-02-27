#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int cnt=0;
  for(int i=1;i*i<=n;i++){
     if(n%i==0){
      cnt+=1;
      if(i!=n/i){
        cnt+=1;
      }
     }
  }
  cout<<cnt<<"\n";
  for(int i=1;i<=n;i++){
    if(n%i==0){
      cout<<i<<" ";
    }
  }
  return 0;
}