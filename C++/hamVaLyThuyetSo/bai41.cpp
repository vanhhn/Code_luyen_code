#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
#define mod 1000000007
#define ll long long
int a[MAX];
void snt(){
  memset(a,1,sizeof(a));
  a[0]=a[1]=0;
  for(int i=2;i*i<MAX;i++){
    if(a[i]){
      for(int j=i*i;j<MAX;j+=i){
        a[j]=0;
      }
    }
  }
}
ll tinh(int n,int p){
  ll ans=0;
  for(int i=p;i<=n;i*=p){
    ans+=n/i;
  }
  return ans;
}
int main(){
  snt();
   int n;
   cin>>n;
   ll ans=1;
   for(int i=2;i<=n;i+=(i<3)?1:2){
    if(a[i]){
        ll tmp=tinh(n,i);
        ans*=(tmp+1);
        ans%=mod;
    }
   }
   cout<<ans;
   return 0;
}