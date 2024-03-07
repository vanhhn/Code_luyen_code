#include<bits/stdc++.h>
using namespace std;
int checkNamNhuan(int n){
  if(n%400==0||(n%4==0&&n%100!=0)){
    return 1;
  }
  return 0;
}
int main(){
  int t,n;
  cin>>t>>n;
  if(n<=0||t>12||t<=0){
    cout<<"INVALID";
  }
  else{
    if(checkNamNhuan(n)){
      if(t==2)cout<<29;
    }
    else {
      if(t==1||t==3||t==5||t==7||t==8||t==10||t==12){
      cout<<31;
    }
    else if(t==2){
      cout<<28;
    }
    else{
      cout<<30;
    }
    }
  }
  return 0;
}