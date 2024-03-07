#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
int a[MAX];
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     	a[arr[i]]++;
	 }
	 for(int i=0;i<MAX;i++){
	 	if(a[i]!=0){
	 		cout<<i<<" "<<a[i]<<"\n";
		 }
	 }
     

   return 0;
}
