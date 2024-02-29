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
int checkBaUocSo(int n){
  int d=0;
  for(int i=2;i*i<+n;i+=(i<3)?1:2){
    if(n%i==0){
      d++;
      while(n%i==0){
        n/=i;
      }
    }
  }
  if(n!=1){
    d++;
  }
  return d>=3;
}
int main(){
  int a,b;
  cin>>a>>b;
  int ok=0;
  for(int i=a;i<=b;i++){
    if(checkThuanNghich(i)&&checkBaUocSo(i)){
      cout<<i<<" ";
      ok=1;
    }
  }
  if(!ok){
    cout<<"-1";
  }
  return 0;
}