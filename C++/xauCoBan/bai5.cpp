#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s.size()<=3){
    cout<<s;
  }
  else if(s.size()%3==0){
    for(int i=0;i<s.size();i++){
         if(i%3==2&&i!=s.size()-1){
          cout<<s[i]<<",";
         }
         else{
          cout<<s[i];
         }
    }
  }
  else if(s.size()%3==1){
     for(int i=0;i<s.size();i++){
         if(i%3==0&&i!=s.size()-1){
          cout<<s[i]<<",";
         }
         else{
          cout<<s[i];
         }
    }
  }
   else if(s.size()%3==2){
     for(int i=0;i<s.size();i++){
         if(i%3==1&&i!=s.size()-1){
          cout<<s[i]<<",";
         }
         else{
          cout<<s[i];
         }
    }
  }
  return 0;
}