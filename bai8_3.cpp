#include<bits/stdc++.h>
using namespace std;
int check(int n){
  if(n<=3) return n>1;
  if(n%2==0||n%3==0){
    return 0;
  }
  for(int i=5;i*i<=n;i+=6){
    if(n%i==0||n%(i+2)==0){
      return 0;
    }
  }
  return 1;
}
int check1(int n){
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n/=10;
  }
  return check(sum);
}
int check2(int n){
  string s=to_string(n);
  for(char c:s){
    if(c!='2'&&c!='3'&&c!='5'&&c!='7'){
      return 0;
    }
  }
  return 1;
}
int main(){
  int l,r;
  cin>>l>>r;
  int ans=0;
  for(int i=l;i<=r;i++){
    if(check2(i)&&check(i)&&check1(i)){
      ans++;
    }
  }
  cout<<ans;
  return 0;
}