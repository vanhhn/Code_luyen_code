#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int n;
vector<vector<int>> c; // Ma trận chi phí
vector<vector<int>> dp; // Bảng lưu trữ kết quả tối ưu
const int INF = INT_MAX;

int tsp() {
    // Khởi tạo bảng dp với giá trị INF
    dp.resize(n, vector<int>(1 << n, INF));

    // Trường hợp cơ sở: đi từ thành phố 0 đến thành phố i
    for (int i = 0; i < n; i++) {
        dp[i][1 << i] = c[0][i];
    }

    // Quy hoạch động
    for (int mask = 1; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                for (int j = 0; j < n; j++) {
                    if (j != i && (mask & (1 << j))) {
                        dp[i][mask] = min(dp[i][mask], dp[j][mask ^ (1 << i)] + c[j][i]);
                    }
                }
            }
        }
    }

    // Tìm kết quả tối ưu
    int minCost = INF;
    for (int i = 1; i < n; i++) {
        minCost = min(minCost, dp[i][(1 << n) - 1] + c[i][0]);
    }

    return minCost;
}

int main() {
    cin >> n;
    c.resize(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c[i][j];
        }
    }

    int minCost = tsp();

    cout << minCost << endl;
  system("pause");
    return 0;
}