#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main(){
     int n;
     cin>>n;
     ll a[n];
     ll ans1=0, ans2=1;
     for(int i=0;i<n;i++){
     	cin>>a[i];
     	ans1+=a[i];
     	ans2*=a[i];
     	ans1%=mod;
     	ans2%=mod;
	 }
	 cout<<ans1<<"\n"<<ans2;
     
   return 0;
}
