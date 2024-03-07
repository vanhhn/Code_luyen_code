#include <iostream>
using namespace std;

int main() {
    int N, X, K;
    cin >> N >> X >> K;

    int A[1000];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Chèn X vào vị trí K trong mảng
    for (int i = N; i > K; i--) {
        A[i] = A[i - 1];
    }
    A[K] = X;
    N++;

    // In ra mảng sau khi chèn
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}