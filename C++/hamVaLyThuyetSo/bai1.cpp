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
int main(){
  int n;
  cin>>n;
  cout<<(check(n)?"YES":"NO");
  return 0;
}