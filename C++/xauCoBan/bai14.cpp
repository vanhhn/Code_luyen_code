#include <bits/stdc++.h>
using namespace std;
string chuanHoa(string s)
{
  string tmp = "";
  for (char c : s)
  {
    tmp += tolower(c);
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
  int ans = 0;
  for (string x : v)
  {
    if (x == "28tech")
      ans++;
  }

  cout << ans;
  return 0;
}