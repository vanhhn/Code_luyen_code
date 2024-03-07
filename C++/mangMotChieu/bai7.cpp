#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int &x:a){
     	cin>>x;
	 }
	 sort(a,a+n);
	 int ans=INT_MAX;
	 for(int i=0;i<n-1;i++){
	 	ans=min(ans,a[i+1]-a[i]);
	 }
	 cout<<ans;
   return 0;
}
