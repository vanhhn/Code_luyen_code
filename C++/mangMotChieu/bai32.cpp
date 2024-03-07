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

    // Dịch chuyển các phần tử trong mảng A sang trái K vị trí
    int temp;
    for (int i = 0; i < K; i++) {
        temp = A[0];  // Lưu giá trị của phần tử đầu tiên
        for (int j = 0; j < N - 1; j++) {
            A[j] = A[j + 1];  // Dịch chuyển phần tử sang trái
        }
        A[N - 1] = temp;  // Gán giá trị lưu trữ vào phần tử cuối cùng
    }

    // In ra mảng sau khi xoay trái
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}