#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long 
#define MAX 1000001
ll a[MAX];
void preCal(){
  a[0]=0,a[1]=1;
  for(int i=2;i<MAX;i++){
    a[i]=((a[i-1]%mod)+(a[i-2]%mod))%mod;
  }
}
int main(){
  preCal();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<a[n]<<"\n";
  }
  return 0;
}