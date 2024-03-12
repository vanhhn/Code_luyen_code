#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  int a[3];
  memset(a,0,sizeof(a));
  for(char c:s){
    if(isalpha(c))a[0]++;
    else if(isdigit(c))a[1]++;
    else a[2]++;
  }
  for(int &x:a)cout<<x<<" ";
  return 0;
}