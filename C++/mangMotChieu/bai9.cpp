#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[1001];
int main(){
     int n;
     cin>>n;
    int a[n];
    for(int &x:a){
    	cin>>x;
    	cnt[x]++;
	}
	for(int &x:a){
		if(cnt[x]){
			cout<<x<<" "<<cnt[x]<<"\n";
			cnt[x]=0;
		}
	}
   return 0;
}
