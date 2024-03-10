#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
void init(){
  cin>>n;
  ok=1;
  memset(a,0,sizeof(a));
}
void in(){
  for(int i=1;i<=n;i++){
    cout<<a[i];
  }
  cout<<"\n";
}
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
bool check(){
  int l=1,r=n;
  while(l<=r){
    if(a[l]!=a[r]){
      return false;
    }
    else{
      l++;
      r--;
    }
  }
  return true;
}
int main(){
  init();
  while(ok){
    if(check()){
      in();
    }
    next();
  }
  system("pause");
  return 0;
}