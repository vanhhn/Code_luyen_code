#include<bits/stdc++.h>
using namespace std;
int check(int a,int b,int c){
  if(a+b<=c||b+c<=a||a+c<=b||a<=0||b<=0||c<=0){
    return 5;
  }
  else if(a==b&&c==a){
    return 1;
  }
  else if(a==b||b==c||c==a){
    return 2;
  }
  else if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b){
    return 3;
  }
  else{
    return 4;
  }
}
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int ans=check(a,b,c);
  if(ans==5){
    cout<<"INVALID";
  }
  else{
    cout<<ans;
  }
  return 0;
}