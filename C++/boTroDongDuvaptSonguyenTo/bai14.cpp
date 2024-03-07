#include<bits/stdc++.h>
using namespace std;
int check(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return 0;
    }
  }
  return n>1;
}
int a[8]={1,2,3,5,8,13,21,34};
int check2(int n){
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  for(int x:a){
    if(x==sum){
      return 1;
    }
  }
  return 0;
}
int main(){
   int n;
   cin>>n;
   for(int i=2;i<n;i+=(i<3)?1:2){
    if(check(i)&&check2(i)){
      cout<<i<<" ";
    }
   }
   return 0;
}