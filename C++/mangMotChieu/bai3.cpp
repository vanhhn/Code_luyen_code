#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int n;
     cin>>n;
     int ans=0;
     int mi=INT_MAX;
     int a[n];
     for(int &x:a){
     	cin>>x;
     	mi=min(mi,x);
	 }
	 for(int &x:a){
	 	if(x==mi){
	 		ans++;
		 }
	 }
	 cout<<ans;
	 

   return 0;
}
