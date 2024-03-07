#include<bits/stdc++.h>
using namespace std;
int n,ok,a[100];
void init(){
  cin>>n;
  ok=1;
  memset(a,0,sizeof(a));
}
void in(){
  for(int i=1;i<=n;i++){
   cout<<(a[i]==1?"A":"B");
  }
  cout<<"\n";
}
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]==0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
int main(){
  init();
  while(ok){
    in();
    next();
  }
  return 0;
}