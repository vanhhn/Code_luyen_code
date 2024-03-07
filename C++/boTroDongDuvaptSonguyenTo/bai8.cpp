#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
#define mod 1000000007
ll a[MAX];
void sinh(){
  a[0]=1;
  for(int i=1;i<MAX;i++){
    a[i]=a[i-1]*i;
    a[i]%=mod;
  }
}
int main(){
  sinh();
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<a[i]<<"\n";
  }
  return 0;
}