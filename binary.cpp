#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void init(){
  cin>>n;
  memset(a,0,sizeof(a));
}
void in(){
  for(int i=1;i<=n;i++){
    cout<<a[i];
  }
  cout<<"\n";
}
void Try(int i){
  for(int j=0;j<=1;j++){
    a[i]=j;
    if(i==n){
      in();
    }
    else{
      Try(i+1);
    }
  }
}
int main(){
  init();
  Try(1);
  system("pause");
}