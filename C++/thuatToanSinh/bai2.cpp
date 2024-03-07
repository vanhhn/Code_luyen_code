#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[100];
void init(){
  cin>>n>>k;
  ok=1;
  for(int i=1;i<=k;i++){
    cin>>a[i];
  }
}
void in(){
  for(int i=1;i<=k;i++){
    cout<<a[i]<<" ";
  }
}
void next(){
  int i=k;
  while(i>0&&a[i]==n-k+i){
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]+=1;
    for(int j=i+1;j<=k;j++){
      a[j]=a[j-1]+1;
    }
  }
}
int main(){
  init();
  next();
  if(ok==0){
    for(int i=1;i<=k;i++){
      cout<<i<<" ";
    }
  }
  else{
  in();
  }
  return 0;
}