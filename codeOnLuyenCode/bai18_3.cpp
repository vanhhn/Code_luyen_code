#include<bits/stdc++.h>
using namespace std;
int tongChuSo(int n){
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  return sum;
}
int isSmith(int n){
  int dem=0;
  int sum=tongChuSo(n);
  int ans=0;
  for(int i=2;i*i<=n;i+=(i<3)?1:2){
    if(n%i==0){
      while(n%i==0){
        dem++;
        ans+=tongChuSo(i);
        n/=i;
      }
    }
  }
  if(n!=1){
    ans+=tongChuSo(n);
    dem++;
  }
  return sum==ans&&dem!=1;
}
int main(){
   int n;
   cin>>n;
   if(isSmith(n)){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
   return 0;
}