#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int a[1000];
void snt(){
    memset(a,1,sizeof(a));
    a[0]=a[1]=0;
    for(int i=2;i*i<1000;i++){
        if(a[i]){
            for(int j=i*i;j<1000;j+=i){
                a[j]=0;
            }
        }
    }
}
int check(int n){
    int sum=0;
    while(n!=0){
        int so=n%10;
        sum+=so*so;
        n/=10;
    }
    return a[sum];
}
int main()
{
    snt();
    int t;
    cin >> t;
    while (t--)
    { 
        int n;
        cin>>n;
       for(int i=n+1;;i++){
        if(check(i)){
            cout<<i<<"\n";
            break;
        }
       }
        
    }
    return 0;
}