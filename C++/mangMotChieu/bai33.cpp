#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int A[N];

    // Nhập mảng A[]
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Dịch chuyển các phần tử trong mảng A sang phải K vị trí
    int temp;
    for (int i = 0; i < K; i++) {
        temp = A[N - 1];  // Lưu giá trị của phần tử cuối cùng
        for (int j = N - 1; j > 0; j--) {
            A[j] = A[j - 1];  // Dịch chuyển phần tử sang phải
        }
        A[0] = temp;  // Gán giá trị lưu trữ vào phần tử đầu tiên
    }

    // In ra mảng sau khi xoay phải
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}