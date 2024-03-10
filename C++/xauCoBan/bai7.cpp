#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  string so="",chu="";
  for(char c:s){
    if(isdigit(c)){
      so+=c;
    }
    else{
      chu+=c;
    }
  }
  cout<<so<<"\n"<<chu;
  return 0;
}