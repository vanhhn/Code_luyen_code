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
	 int k;
	 cin>>k;
	 int ans=0;
	 for(int i=0;i<n-1;i++){
	 	for(int j=i+1;j<n;j++){
	 		if(a[i]+a[j]==k){
	 			ans++;
			 }
		 }
	 }
	 cout<<ans;

   return 0;
}
