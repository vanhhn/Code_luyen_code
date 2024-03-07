#include <iostream>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;

    int A[N + M];
    int B[M];

    // Nhập mảng A[]
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Nhập mảng B[]
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    // Dịch chuyển các phần tử của mảng A[] để tạo khoảng trống cho mảng B[]
    for (int i = N - 1; i >= P; i--) {
        A[i + M] = A[i];
    }

    // Chèn mảng B[] vào chỉ số P của mảng A[]
    for (int i = 0; i < M; i++) {
        A[P + i] = B[i];
    }

    // In ra mảng A[] sau khi chèn
    for (int i = 0; i < N + M; i++) {
        cout << A[i] << " ";
    }

    return 0;
}