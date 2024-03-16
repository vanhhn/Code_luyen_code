#include<bits/stdc++.h>
using namespace std;

int findMinCost(int m, int n, vector<vector<int>>& cost) {
    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    dp[0][0] = cost[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i + 1 < m) {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + cost[i + 1][j]);
                if (j + 1 < n)
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + cost[i + 1][j + 1]);
            }
            if (j + 1 < n)
                dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + cost[i][j + 1]);
        }
    }
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> cost(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }
    int minCost = findMinCost(m, n, cost);
    cout << minCost << endl;
    system("pause");
    return 0;
}