#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void init(){
  cin>>n>>k;
}
void in(){
  for(int i=1;i<=k;i++){
    cout<<a[i];
  }
  cout<<"\n";
}
void Try(int i){
  for(int j=1;j<=n;j++){
    a[i]=j;
    if(i==k){
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
    return 0;
}