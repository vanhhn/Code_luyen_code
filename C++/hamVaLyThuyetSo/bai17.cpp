#include<bits/stdc++.h>
using namespace std;
int checkLocPhat(string s){
  for(char c:s){
    if(c!='0'&&c!='6'&&c!='8'){
      return 0;
    }
  }
  return 1;
}
int main(){
  string n;
  cin>>n;
  cout<<checkLocPhat(n);
  return 0;
}