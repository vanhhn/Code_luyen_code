#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     int n;
     cin>>n;
     int a[n];
     int ma=INT_MIN,mi=INT_MAX;
     for(int &x:a){
     	cin>>x;
     	ma=max(x,ma);
     	mi=min(x,mi);
	 }
	 int ans1=-1,ans2=-1;
	 for(int i=0;i<n;i++){
	 	if(a[i]==mi){
	 		ans1=i;
		 }
		 if(a[i]==ma){
		 	if(ans1==-1){
		 		ans2=i;
			 }
		 }
	 }
	 cout<<ans1<<" "<<ans2;
   return 0;
}
