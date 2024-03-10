#include<bits/stdc++.h>
using namespace std;
int n,a[100],ok;
vector<string>v;
void next(){
  int i=n;
  while(i>0&&a[i]==1){
    a[i]=0;
    i--;
  }
  if(i<=0){
    ok=0;
  }
  else{
    a[i]=1;
  }
}
void kq(){
  string s="";
  for(int i=1;i<=n;i++){
    s+=to_string(a[i]);
  }
  v.push_back(s);
}
bool cmp(string a, string b) {
    
  
}
int main(){
  for(int i=1;i<=15;i++){
    ok=1;
    n=i;
    memset(a,0,sizeof(a));
    while(ok){
      kq();
      next();
    }
  }
  vector<string>v1=v;
  for(int i=0;i<v.size();i++){
    reverse(v1[i].begin(),v1[i].end());
    v[i]+=v1[i];
  }
  sort(v.begin(),v.end(),cmp);
  int N;
  cin>>N;
  for(int i=0;i<pow(2,N/2+1)-2;i++){
    cout<<v[i]<<"\n";
  }
  return 0;
}