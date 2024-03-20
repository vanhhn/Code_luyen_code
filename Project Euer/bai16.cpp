#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
string nhan(string a,string b){
  int n1=a.size();
  int n2=b.size();
  string ans(n1+n2,'0');
  for(int i=n1-1;i>=0;i--){
    int nho=0;
    for(int j=n2-1;j>=0;j--){
      int so=(a[i]-'0')*(b[j]-'0')+ans[i+j+1]-'0'+nho;
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
string power(string x,int n){
  if(n==0) return "1";
  string res=power(x,n/2);
  if(n%2==0) return nhan(res,res);
  else return nhan(x,nhan(res,res));
}
int tinhTongChuSo(string s){
  int sum=0;
  for(char c:s)sum+=c-'0';
  return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       string s=power("2",n);
       cout<<tinhTongChuSo(s)<<"\n";
    }
    return 0;
}