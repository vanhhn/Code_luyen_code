#include<bits/stdc++.h>
using namespace std;
int checkNguyenTo(int n){
  if(n<=3) return n>1;
  if(n%2==0||n%3==0) return 0;
  for(int i=5;i*i<=n;i+=6){
    if(n%i==0||n%(i+2)==0){
      return 0;
    }
  }
  return 1;
}
int main(){
   int n=0;
   int a[10005];
   map<int,int>mp;
   int x;
   while(scanf("%d",&x)!=EOF){
    mp[x]++;
    a[n]=x;
    n++;
   }
   for(int i=0;i<n;i++){
    if(checkNguyenTo(a[i])&&mp[a[i]]!=0){
      cout<<a[i]<<" "<<mp[a[i]]<<"\n";
      mp[a[i]]=0;
    }
   }
   return 0;
}