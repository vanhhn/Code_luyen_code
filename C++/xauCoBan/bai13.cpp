#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  string tmp="";
  vector<string>v;
  for(char c:s){
    if(!isalpha(c)){
      v.push_back(tmp);
      tmp="";
    }
    else if(isalpha(c)){
      tmp+=c;
    }
  }
  v.push_back(tmp);
  for(int i=0;i<v.size();i++){
     if(i!=v.size()-1){
      cout<<v[i]<<" ";
     }
     else {
      cout<<v[i];
     }
  }
  return 0;
}