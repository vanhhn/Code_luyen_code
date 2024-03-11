#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
int a[MAX];
int f[MAX];
void preCal(){
  for(int i=0;i<MAX;i++){
    a[i]=1;
  }
  a[0]=a[1]=0;
  for(int i=2;i*i<MAX;i++){
    if(a[i]){
      for(int j=i*i;j<MAX;j+=i){
        a[j]=0;
      }
    }
  }
  f[0]=0;
  for(int i=1;i<MAX;i++){
      f[i]=f[i-1]+a[i];
  }
}
int main(){
  preCal();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<f[n]<<"\n";
  }
  return 0;
}