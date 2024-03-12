#include<bits/stdc++.h>
using namespace std;
int tim(string a,string b){
  return a.find(b);
}
int main(){
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  cout<<(tim(s1,s2)?"YES":"NO");
  system("pause");
  return 0;
}