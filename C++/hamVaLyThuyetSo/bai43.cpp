#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int a[1001][1001];
void sinh(){
  for(int i=0;i<1001;i++){
    for(int j=0;j<=i;j++){
      if(j==0||i==j){
        a[i][j]=1;
      }
      else{
        a[i][j]=a[i-1][j]+a[i-1][j-1];
        a[i][j]%=mod;
      }
    }
  }
}
int main(){
  sinh();
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}