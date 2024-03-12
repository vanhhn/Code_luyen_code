#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  stringstream ss(s);
  string token;
  vector<string>v;
  map<string,int>mp;
  while(ss>>token){
    v.push_back(token);
    mp[token]=1;
  }
  int count = 0;
  for (auto it = mp.begin(); it != mp.end(); it++){
    cout << (*it).first;
    if (count != mp.size() - 1) {
      cout << " ";
    }
    count++;
  }
  cout<<"\n";
  for(string x:v){
    if(mp[x]!=0){
      cout<<x<<" ";
      mp[x]=0;
    }
  }
  system("pause");
  return 0;
}