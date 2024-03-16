#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[2001][2001];
void preCal(){
        for(int i=0;i<=2000;i++){
            for(int j=0;j<=i;j++){
                if(j==0||i==j){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
                    dp[i][j]%=mod;
                }
            }
        }
}
int main(){
  preCal();
  int n,m;
  cin>>n>>m;
  cout<<dp[m+n-2][n-1]<<"\n";
  return 0;
}