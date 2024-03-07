#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
int a[MAX];

int main(){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
     	int x;cin>>x;
     	a[x]=1;
	 }
	 int cnt=0;
	 for(int i=0;i<MAX;i++){
	 	if(a[i]){
	 		cnt++;
		 }
	 }
     cout<<cnt;
   return 0;
}
