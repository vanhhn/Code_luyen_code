#include<bits/stdc++.h>
using namespace std;
int check(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return n>1;
}
int check1(string s){
  for(char c:s){
    if(c!='2'&&c!='3'&&c!='5'&&c!='7'){
      return 0;
    }
  }
  return 1;
}
int check2(string s){
  int sum=0;
  for(char c:s){
    sum+=c-'0';
  }
  return check(sum);
}
int main(){
  string s;
  cin>>s;
  cout<<(check1(s)&&check2(s)?"YES":"NO");
  return 0;
}