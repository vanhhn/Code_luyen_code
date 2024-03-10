#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,a[100],b[100],ok;
ll sum1=0,sum2=0,ans=INT_MAX;
void init(){
   cin>>n;
   for(int i=1;i<=n;i++){
    cin>>b[i];
   }
   ok=1;
}
void kq(){
  for(int i=1;i<=n;i++){
    if(a[i]){
      sum1+=b[i];
    }
    else{
      sum2+=b[i];
    }
   
  }
   ans=min(ans,abs(sum1-sum2));
   sum1=sum2=0;
}
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
int main(){
  init();
  next();
  while(ok){
    kq();
    next();
  }
  cout<<ans;
  return 0;
}