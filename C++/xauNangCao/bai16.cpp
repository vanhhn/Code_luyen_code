#include<bits/stdc++.h>
using namespace std;
string chuanHoa(string s){
  string tmp="";
  tmp+=toupper(s[0]);
  for(int i=1;i<s.size();i++){
    tmp+=tolower(s[i]);
  }
  return tmp;
}
int main(){
  string s;
  string a;
  getline(cin,s);
  getline(cin,a);
  stringstream ss(s);
  string token;
  vector<string>v;
  while(ss>>token){
    v.push_back(chuanHoa(token));
  }
   if(a[1]=='/'){
    a="0"+a;
   }
   if(a[4]=='/'){
    a.insert(3,"0");
   }
   for(string x:v){
    cout<<x<<" ";
   }
   cout<<"\n"<<a;

   system("pause");
   return 0;
}