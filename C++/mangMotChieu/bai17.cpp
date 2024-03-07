#include<bits/stdc++.h>
using namespace std;
#define ll long long
int checkPanlidomeArray(int a[],int n){
	int l=0,r=n-1;
	while(l<=r){
		if(a[l]!=a[r]){
			return 0;
		}
		else{
			l++;
			r--;
		}
	}
	return 1;
}
int main(){
    int  n;
    cin>>n;
    int a[n];
    for(int &x:a){
    	cin>>x;
	}
    cout<<(checkPanlidomeArray(a,n)?"YES":"NO");
   return 0;
}
