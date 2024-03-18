#include<bits/stdc++.h>
using namespace std;
string nhan(string a,string b){
  int n1=a.size();
  int n2=b.size();
  string ans(n1+n2,'0');
  for(int i=n1-1;i>=0;i--){
    int nho=0;
    for(int j=n2-1;j>=0;j--){
      int so=(a[i]-'0')*(b[j]-'0')+nho+ans[i+j+1]-'0';
      nho=so/10;
      ans[i+j+1]=(char)(so%10+'0');
    }
    ans[i]+=nho;
  }
  while(ans[0]=='0'&&ans.size()>1){
    ans.erase(0,1);
  }
  return ans;
}
string power(string a,int n){
  if(n==0) return "1";
  string res=power(a,n/2);
  if(n%2==0)return nhan(res,res);
  else{
    return nhan(a,nhan(res,res));
  }
}
int main(){
  string a;
  int n;
  cin>>a>>n;
  cout<<power(a,n);
  return 0;
}