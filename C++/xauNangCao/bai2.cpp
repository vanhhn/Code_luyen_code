#include<bits/stdc++.h>
using namespace std;
string bienDoiHoa(string s){
  string tmp="";
  for(char c:s)tmp+=toupper(c);
  return tmp;
}
string bienDoiThuong(string s){
  string tmp="";
  for(char c:s)tmp+=tolower(c);
  return tmp;
}
using namespace std;
int main(){
  string s;
  getline(cin,s);
  cout<<bienDoiHoa(s)<<"\n"<<bienDoiThuong(s);
  system("pause");
  return 0;
}