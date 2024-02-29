#include<bits/stdc++.h>
using namespace std;
int uocNguyenToMax(int n){
    int res=-1;
    for(int i=2;i*i<=n;i+=(i<3)?1:2){
        if(n%i==0){
            res=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1){
        res=n;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<uocNguyenToMax(n)<<"\n";
    }
    return 0;
}