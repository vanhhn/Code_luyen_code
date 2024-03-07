#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
int main(){
   int n;
   cin>>n;
   ll a[n];
   ll ans=1;
   for(int i=0;i<n;i++){
    cin>>a[i];
    ans=((ans%mod)*(a[i]%mod))%mod;
   }
   cout<<ans;
   return 0;

}