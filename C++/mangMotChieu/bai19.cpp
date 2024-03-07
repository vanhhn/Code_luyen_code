#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 int l=0,r=n-1;
	 while(l<=r){
	 	swap(a[l],a[r]);
	 	l++;
	 	r--;
	 }
	 for(int &x:a)cout<<x<<" ";
	 

   return 0;
}
