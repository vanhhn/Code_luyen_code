#include<bits/stdc++.h>
using namespace std;
string chuanHoa(string s){
  string tmp="";
  for(char c:s){
   tmp+=tolower(c);
  }
  return tmp;
}
int main(){
  int n;
  cin>>n;
  cin.ignore();
  while(n--){
  string s;
  string s1,s2;
  getline(cin,s);
  int j;
  for(int i=0;i<s.size();i++){
    if(!isdigit(s[i])){
      s1+=s[i];
    }
    else{
      j=i;
      break;
    }
  }
  for(int k=j;k<s.size();k++){
    s2+=s[k];
  }
  stringstream ss(s1);
  string token;
  vector<string>v;
  while(ss>>token){
    v.push_back(token);
  }
  int l=v.size();
  string emailSV=chuanHoa(v[l-1]);
  for(int i=0;i<l-1;i++){
    emailSV+=tolower(v[i][0]);
  }
  string matKhauSV="";
  s2.erase(2,1);
  s2.erase(4,1);
  if(s2[0]=='0'&&s2[2]!='0'){
    s2.erase(0,1);
  }
  else if(s2[0]=='0'&&s2[2]=='0'){
    s2.erase(0,1);
    s2.erase(1,1);
  }
  else if(s2[0]!='0'&&s2[2]=='0'){
    s2.erase(2,1);
  }
  matKhauSV=s2;
  emailSV+="@xyz.edu.vn";
  cout<<emailSV<<"\n"<<matKhauSV<<"\n";
  }
  system("pause");
  return 0;
} 