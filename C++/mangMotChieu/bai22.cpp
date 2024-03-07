#include<bits/stdc++.h>
using namespace std;
#define ll long long
void xoa(int a[],int &n,int index){
	for(int i=index;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
int main(){
     int n,x;
     cin>>n>>x;
     int a[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
	 }
	 int index=-1;
	 for(int i=0;i<n;i++){
	 	if(x==a[i]){
	 		index=i;
	 		break;
		 }
	 }
	 if(index==-1){
	 	cout<<"NOT FOUND";
	 }
	 else{
	 	xoa(a,n,index);
	 	for(int i=0;i<n;i++){
	 		cout<<a[i]<<" ";
		 }
	 }

   return 0;
}
