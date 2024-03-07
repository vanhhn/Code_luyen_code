#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];

    // Nhập mảng A[]
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int B[N - 1];

    // Nhập mảng B[]
    for (int i = 0; i < N - 1; i++) {
        cin >> B[i];
    }

    // Thực hiện phép tính cộng hoặc trừ dựa trên mảng B[]
    for (int i = 0; i < N - 1; i++) {
        if (B[i] == 1) {
            A[i + 1] = A[i] + A[i + 1];  // Cộng
        } else {
            A[i + 1] = A[i] - A[i + 1];  // Trừ
        }
    }

    // In ra kết quả của bài toán
    cout << A[N - 1];

    return 0;
}