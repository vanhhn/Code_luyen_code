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
     int cnt=0;
     ll sum=0;
     for(int i=0;i<n;i++){
     	int x;
     	cin>>x;
     	if(check(x)){
     		cnt++;
     		sum+=x;
		 }
	 }
     printf("%.3f",sum*1.0/cnt);
   return 0;
}
