#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a){
    	cin>>x;
	}
	sort(a,a+n);
	cout<<a[n-1]<<" "<<a[n-2];

   return 0;
}
