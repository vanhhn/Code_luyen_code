#include<bits/stdc++.h>
using namespace std;
#define ll long long
int checkPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int checkPanlidome(int n){
	int rev=0,tmp=n;
    while(n!=0){
    	rev=rev*10+n%10;
    	n/=10;
	}
	return rev==tmp;
}
int checkSumOfDigitisPrime(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return checkPrime(sum);
}
int checkSquare(int n){
	int x=(int)sqrt(n);
	if(x*x==n||(x+1)*(x+1)==n){
		return 1;
	}
	return 0;
}
int main(){
     int n;
     cin>>n;
     int d[4]={0};
     int a[n];
     for(int i=0;i<n;i++){
     	cin>>a[i];
     	if(checkPrime(a[i])){
     		d[0]++;
		 }
		 if(checkPanlidome(a[i])){
		 	d[1]++;
		 }
		 if(checkSquare(a[i])){
		 	d[2]++;
		 }
		 if(checkSumOfDigitisPrime(a[i])){
		 	d[3]++;
		 }
	 }
	 for(int i=0;i<4;i++){
	 	cout<<d[i]<<"\n";
	 }

   return 0;
}
