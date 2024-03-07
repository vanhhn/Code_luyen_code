#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int n;
     cin>>n;
     ll a[n];
     for(ll &x:a)cin>>x;
     if(a[0]*a[1]<0){
     	cout<<a[0]<<" ";
	 }
     for(int i=1;i<n-1;i++){
     	if(a[i]*a[i+1]<0||a[i-1]*a[i]<0){
     		cout<<a[i]<<" ";
		 }
	 }
	 if(a[n-1]*a[n-2]<0){
	 	cout<<a[n-1];
	 }

   return 0;
}
