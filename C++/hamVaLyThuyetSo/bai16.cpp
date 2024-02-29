#include<bits/stdc++.h>
using namespace std;
int checkThuanNghich(int n){
  int rev=0,tmp=n;
  while(n!=0){
    rev=rev*10+n%10;
    n/=10;
  }
  return rev==tmp;
}
int checkChuSo6vs8(int n){
 int cnt=0,sum=0;
 while(n!=0){
  int cs=n%10;
  if(cs==6){
    cnt++;
  }
  sum+=cs;
  n/=10;
 }
 return cnt>=1&&sum%10==8;
}
int main(){
  int a,b;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(checkThuanNghich(i)&&checkChuSo6vs8(i)){
      cout<<i<<" ";
    }
  }
  return 0;
}