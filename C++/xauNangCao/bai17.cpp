#include <iostream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

string chuanHoa(string s)
{
  string tmp = "";
  tmp += toupper(s[0]);
  for (int i = 1; i < s.size(); i++)
  {
    tmp += tolower(s[i]);
  }
  return tmp;
}
string chuanHoa2(string s){
  string tmp="";
  for(char c:s){
    tmp+=toupper(c);
  }
  return tmp;
}
int main()
{
  string s;
  getline(cin, s);
  stringstream ss(s);
  string token;
  vector<string> v;
  while (ss >> token)
  {
    v.push_back(chuanHoa(token));
  }
  int l=v.size();
  v[l-1]=chuanHoa2(v[l-1]);
  for (int i = 0; i < v.size(); i++)
  {
    if (i == v.size() - 2)
    {
      cout << v[i] << ", ";
    }
    else if (i == v.size() - 1)
    {
      cout<<v[i]<<"\n";
    }
    else
    {
      cout << v[i] << " ";
    }
  }
  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (i == v.size() - 1)
    {
      
      cout <<v[i]<<", ";
    }
    else
    {
      cout << v[i] << " ";
    }
  }
  return 0;
}