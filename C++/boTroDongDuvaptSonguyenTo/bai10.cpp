#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define MAX 1000001
#define ll long long
ll a[MAX];
void sinh(){
  a[1]=1;
  a[2]=1;
  for(int i=3;i<MAX;i++){
    a[i]=2*a[i-1]+3*a[i-2];
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