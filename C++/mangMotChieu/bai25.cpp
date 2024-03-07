#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int x;
    cin>>x;
    int demc=0,deml=0;
    while(scanf("%d",&x)!=EOF){
    	if(x%2==0){
    		demc++;
		}
		else{
			deml++;
		}
	}
	if(demc==deml){
		cout<<"CHANLE";
	}
	else if(demc>deml){
		cout<<"CHAN";
	}
	else{
		cout<<"LE";
	}

   return 0;
}
