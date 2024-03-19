#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll uocNguyenToLonNhat(ll n){
  ll res=-1;
  for(ll i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      res=i;
      while(n%i==0){
        n/=i;
      }
    }
  }
  if(n!=1) res=n;
  return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<uocNguyenToLonNhat(n)<<"\n";
    }
    return 0;
}