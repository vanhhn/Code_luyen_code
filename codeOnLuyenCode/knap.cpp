#include <bits/stdc++.h>
using namespace std;
#define MAX 5005
int main()
{
  int n, m;
  cin >> n >> m;
  int w[MAX], v[MAX];
  for (int i = 1; i <= n; i++)
  {
    int x, y;
    cin >> x >> y;
    w[i] = x;
    v[i] = y;
  }
  int dp[n+1][m+1];
  memset(dp, 0, sizeof(dp));
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      dp[i][j] = dp[i - 1][j];
      if (j >= w[i])
      {
        dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
      }
    }
  }
  cout << dp[n][m];
  system("pause");
}