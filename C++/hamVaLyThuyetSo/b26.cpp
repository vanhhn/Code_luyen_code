#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001

int check(int n){
    for(int i=2;i*i<=n;i+=(i<3)?1:2){
        if(n%i==0){
            int d=0;
            while(n%i==0){
                d++;
                n/=i;
            }
            if(d>1){
                return 1;
            }
        }
    }
   return 0;
}
int main(){
    int x,y;
    cin>>x>>y;

    for(int i=x;i<=y;i++){
         if(check(i)){
             cout<<i<<" ";
         }
    }
    return 0;
    
}