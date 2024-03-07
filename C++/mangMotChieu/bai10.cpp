#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
   int n;
   cin>>n;
   int sum=0;
   int cnt=0;
   int a[n],b[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   	sum+=a[i];
   	if(i==0){
   		b[0]=a[0];
	   }
	   else{
	   	b[i]=b[i-1]+a[i];
	   }
   }
   
   for(int i=1;i<n-1;i++){
   	  if(check(b[i-1])&&check(sum-b[i])){
   	  	cout<<i<<" ";
		 }
   }

   return 0;
}
