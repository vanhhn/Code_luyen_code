#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int n;
     cin>>n;
     int a[n],dc=0;
     for(int i=0;i<n;i++){
     	cin>>a[i];
     	if(i%2==0&&a[i]%2==0){
     		dc++;
     		cout<<a[i]<<" ";
		 }
	 }
	 if(!dc){
	 	cout<<"NONE";
	 }

   return 0;
}
