#include<bits/stdc++.h>
using namespace std;
int dp[13][13];
void sinh(){
  for(int i=0;i<13;i++){
    for(int j=0;j<=i;j++){
      if(i==j||j==0){
        dp[i][j]=1;
      }
      else{
        dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
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
      cout<<dp[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}