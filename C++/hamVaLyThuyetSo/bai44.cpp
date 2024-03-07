#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
#define mod 1000000007
int a[MAX];
void sangBienDoi(){
  for(int i=1;i<MAX;i++){
    a[i]=i;
  }
  for(int i=2;i*i<MAX;i++){
    if(a[i]==i){
      for(int j=i*i;j<MAX;j+=i){
        if(a[j]==j){
          a[j]=i;
        }
      }
    }
  }
}
int d[MAX];
int main(){
  sangBienDoi();
  int n;
  cin>>n;
  long long ans=1;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    while(x!=1){
      int tmp=a[x];
      while(x%tmp==0){
        d[tmp]++;
        x/=tmp;
      }
    }
  }
  for(int i=2;i<MAX;i+=(i<3)?1:2){
     if(d[i]!=0){
      ans*=(d[i]+1);
      ans%=mod;
     }
  }
  cout<<ans;
  return 0;
}