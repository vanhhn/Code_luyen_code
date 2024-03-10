#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
void init()
{
  cin >> n >> k;
  for (int i = 1; i <= k; i++)
  {
    cin >> a[i];
  }
  ok = 1;
}
void next()
{
  int i = k;
  while (i > 0 && a[i] == n - k + i)
  {
    i--;
  }
  if (i <= 0)
  {
    ok = 0;
  }
  else
  {
    a[i] += 1;
    for (int j = i + 1; j <= k; j++)
    {
      a[j] = a[j - 1] + 1;
    }
  }
}
int main()
{
  init();
  set<int> se;
  for (int i = 1; i <= k; i++)
  {
    se.insert(a[i]);
  }
  next();
  if (ok == 0)
  {
    cout << k;
  }
  else
  {
    for (int i=1;i<=k;i++){
      se.insert(a[i]);
    }
    int ans=se.size()-k;
    cout<<ans;
  }
  return 0;
}