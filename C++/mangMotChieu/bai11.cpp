#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[93];
void sinh(){
	a[0]=0,a[1]=1;
	for(int i=2;i<93;i++){
		a[i]=a[i-1]+a[i-2];
	}
}
int check(ll n){
	int l=0,r=92;
	while(l<r){
		int m=(l+r)/2;
		if(a[m]==n){
			return 1;
		}
		else if(a[m]<n){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return 0;
}
int main(){
     int n;
     cin>>n;
     ll a[n];
     int ok=0;
     for(int i=0;i<n;i++){
     	cin>>a[i];
     	if(check(a[i])){
     		cout<<a[i]<<" ";
     		ok=1;
		 }
	 }
	 if(!ok){
	 	cout<<"NONE";
	 }

   return 0;
}