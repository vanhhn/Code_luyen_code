#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n<=1){
    cout<<-1;
  }
  else{
  if(n%2==0){
    cout<<n/2<<"\n";
    for(int i=1;i<=n/2;i++){
      cout<<2<<" ";
    }
  }
  else{
    cout<<1+(n-3)/2<<"\n";
    for(int i=1;i<=(n-3)/2;i++){
      cout<<2<<" ";
    }
    cout<<3;
  }
  }
  return 0;
}