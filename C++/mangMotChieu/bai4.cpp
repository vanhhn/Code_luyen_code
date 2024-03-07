#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,x;
    cin>>n;
    int a[n],dn=0,dl=0;
    for(int &b:a){
    	cin>>b;	
}
	cin>>x;
	for(int &b:a){
		if(b>x){
    		dl++;
		}
		else if(b<x){
			dn++;
		}
	}
	cout<<dn<<'\n'<<dl;

   return 0;
}
