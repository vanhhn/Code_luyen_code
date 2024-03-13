#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define MAX 1000001
ll a[MAX];
void sinh(){
  a[1]=1;
  a[2]=2;
  a[3]=4;
  for(int i=4;i<MAX;i++){
    a[i]=a[i-1]+a[i-2]+a[i-3];
    a[i]%=mod;
  }
}
int main(){
  sinh();
  int n;
  cin>>n;
  cout<<a[n];
  return 0;
}