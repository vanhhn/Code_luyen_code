#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int d[10]={0};
  for(char c:s){
     d[c-'0']++;
  }
  for(int i=2;i<=7;i++){
    if(i==2||i==3||i==5||i==7){
      if(d[i]!=0){
        cout<<i<<" "<<d[i]<<"\n";
      }
    }
  }
  cout<<"\n";
  for(char c:s){
    if(c=='2'||c=='3'||c=='7'||c=='5'){
      if(d[c-'0']!=0){
        cout<<c-'0'<<" "<<d[c-'0']<<"\n";
        d[c-'0']=0;
      }
    }
  }
  return 0;
}