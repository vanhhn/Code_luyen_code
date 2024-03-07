#include<bits/stdc++.h>
using namespace std;
int main(){
  char c;
  cin>>c;
  if(c<='z'&&c>='a'){
    cout<<(char)(c-'a'+'A');
  }
  else if(c>='A'&&c<='Z'){
    cout<<(char)(c-'A'+'a');
  }
  else {
    cout<<c;
  }
  return 0;
}