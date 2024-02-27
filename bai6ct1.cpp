#include<bits/stdc++.h>
using namespace std;
int checkTamGiac(int a,int b,int c){
  if(a<=0||b<=0||c<=0||a+b<=c||b+c<=a||a+c<=b){
    return 0;
  }
  return 1;
}
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(checkTamGiac(a,b,c)){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;
}