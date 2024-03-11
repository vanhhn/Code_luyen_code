#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define MAX 1000001
long long a[MAX];
void preCal(){
  a[0]=1;
  for(int i=1;i<MAX;i++){
    a[i]=(a[i-1]%mod)*(i%mod)%mod;
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