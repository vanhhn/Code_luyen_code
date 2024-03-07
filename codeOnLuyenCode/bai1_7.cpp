#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,b;
  cin>>a>>b;
  long long x=a/b*b;
  long long y=(a+b-1)/b*b;
  cout<<x<<"\n"<<y;
  return 0;
}