#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int a[10]={1,1,2,6,24,120,720,5040,40320,362880};
int check(int n){
  int sum=0;
  int tmp=n;
  while(n!=0){
    sum+=a[n%10];
    n/=10;
  }
  return sum%tmp==0;
}
int main()
{
    int n;
    cin>>n;
    ll ans=0;
    for(int i=10;i<n;i++){
      if(check(i)){
        ans+=i;
      }
    }
    cout<<ans;
    return 0;
}