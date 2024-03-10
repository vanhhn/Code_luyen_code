#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
void init(){
  cin>>n;
  ok=1;
  for(int i=0;i<100;i++){
    a[i]=6;
  }
}
void in(){
  for(int i=1;i<=n;i++){
    cout<<a[i];
  }
  cout<<"\n";
}
void next(){
  int i=n;
  while(i>0&&a[i]==8){
    a[i]=6;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=8;
  }
}
bool check(){
  if(a[1]!=8||a[n]!=6){
    return false;
  }
  int dem=0;
  for(int i=1;i<n;i++){
     if(a[i]==8&&a[i+1]==8){
      return false;
     }
  }
  for(int i=1;i<=n;i++){
    if(a[i]==6){
      dem++;
      if(dem>3){
        return false;
      }
    }
    else{
      dem=0;
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
  return 0;
}