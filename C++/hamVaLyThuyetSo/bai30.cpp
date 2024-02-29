#include <bits/stdc++.h>
using namespace std;
#define MAX 10000001
int a[MAX];
void snt()
{
  memset(a, 1, sizeof(a));
  a[0] = a[1] = 0;
  for (int i = 2; i * i < MAX; i++)
  {
    if (a[i])
    {
      for (int j = i * i; j < MAX; j += i)
      {
        a[j] = 0;
      }
    }
  }
}
int check(int n)
{
  if (n < 10)
  {
    return 1;
  }
  int lastDigit = n % 10;
  n /= 10;
  while (n != 0)
  {
    int cs = n % 10;
    if (cs > lastDigit)
    {
      return 0;
    }
    n /= 10;
  }
  return 1;
}
int main()
{
  snt();
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 2; i <= n; i += (i < 3) ? 1 : 2)
  {
    if (a[i] && check(i))
    {
      cout << i << " ";
      ans++;
    }
  }
  cout << "\n"
       << ans;
  return 0;
}