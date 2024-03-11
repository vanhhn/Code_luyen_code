#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
#define mod 1000000007
int a[MAX];
long long f[MAX];
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
  f[1]=0;
  f[2]=2;
  for(int i=3;i<MAX;i++){
      if(a[i]){
        f[i]=((i%mod)*(f[i-1]%mod))%mod;
      }
      else{
        f[i]=f[i-1];
      }
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