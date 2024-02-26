#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000001
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
int main(){
  snt();
  ll n;
  cin>>n;
  ll ans=0;
  for(ll i=2;i*i<=n;i+=(i<3)?1:2){
    if(a[i]){
      ans++;
    }
  }
  cout<<ans;
  return 0;

}