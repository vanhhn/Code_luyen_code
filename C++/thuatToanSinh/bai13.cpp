#include<bits/stdc++.h>
using namespace std;
int n,a[100];
vector<string>v;
void in(){
  string s="";
  for(int i=1;i<=n;i++){
    if(a[i]){
      s+=to_string(i)+" ";
    }
  }
  if(s!="")v.push_back(s);
}
void Try(int i){
  for(int j=0;j<=1;j++){
    a[i]=j;
    if(i==n){
      in();
    }
    else{
      Try(i+1);
    }
  }
}
int main(){
  cin>>n;
  Try(1);
  sort(v.begin(),v.end());
  for(string s:v){
    cout<<s<<"\n";
  }
  system("pause");
  return 0;
}