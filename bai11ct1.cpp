#include<bits/stdc++.h>
using namespace std;
int main(){
  char c;
  cin>>c;
  if(c>='A'&&c<='Z'){
    c=(char)(c-'A'+'a');
  }
  if(c=='z'){
    cout<<'a';
  }
  else{
    cout<<(char)((int)(c)+1);
  }
  return 0;
}