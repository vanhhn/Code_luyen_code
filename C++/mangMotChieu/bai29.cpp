#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	mp[a[i]]++;
	}
	int ans=-1,fre=-1;
	for(auto it:mp){
		if(fre==-1){
			fre=max(fre,it.second);
			ans=it.first;
		}
		else{
			if(fre<it.second){
				fre=it.second;
				ans=it.first;
			}
		}
	}
	cout<<ans<<" "<<fre;

   return 0;
}
