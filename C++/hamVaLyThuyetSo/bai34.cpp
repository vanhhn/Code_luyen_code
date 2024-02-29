#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long a[1000005];
void sinh(){
  a[0]=0;
  a[1]=1;
  for(int i=2;i<=1000004;i++){
    a[i]=a[i-1]+a[i-2];
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