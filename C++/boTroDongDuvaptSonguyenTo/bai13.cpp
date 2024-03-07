#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[93];
void sinh(){
  a[0]=0;
  a[1]=1;
  for(int i=2;i<93;i++){
    a[i]=a[i-1]+a[i-2];
  }
}
int tim(ll a[],ll n){
  // so nho nhat lon hon hoac bang n
  int res=-1;
  int l=0,r=92;
  while(l<=r){
    int m=(l+r)/2;
    if(a[m]>=n){
      res=m;
      r=m-1;// tim kiem ben trai
    }
    else {
      l=m+1;
    }
  }
  return res;
}
int main(){
   sinh();
   ll n;
   cin>>n;
   int ans=tim(a,n);
   if(ans==-1){
    cout<<"NO";
   }
   else{
    cout<<a[ans];
   }
   return 0;
}