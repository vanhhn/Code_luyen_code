#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    ll tc=0,tl=0,sc=0,sl=0;
    for(int &x:a){
    	cin>>x;
    	if(x%2==0){
    		tc+=x;
    		sc+=1;
		}
		else{
			tl+=x;
			sl+=1;
		}
	}
	cout<<sc<<"\n"<<sl<<"\n"<<tc<<"\n"<<tl;
   return 0;
}
