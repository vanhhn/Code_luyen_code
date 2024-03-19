#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool cmp(ll a,ll b){
  string x=to_string(a);
  string y=to_string(b);
  return x+y>y+x;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
      string s;
      getline(cin,s);
      vector<ll>v;
      ll tmp=0;
      for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
          int j=i;
          while(isdigit(s[j])){
          tmp=tmp*10+s[j]-'0';
           j++;
          }
          v.push_back(tmp);
          tmp=0;
          i=j-1;
        }
      }
      sort(v.begin(),v.end(),cmp);
      for(ll x:v) cout<<x;
      cout<<"\n";
    }
    return 0;
}