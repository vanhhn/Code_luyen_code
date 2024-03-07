#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int A[N];

    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int sum = 0;
    for (int i = 0; i < K; i++) {
        sum += A[i];
    }
    cout<<sum<<" ";
    int slidingSum = sum;
    for (int i = K; i < N; i++) {
        slidingSum += A[i] - A[i - K];
        cout<<slidingSum<<" ";
    }

    return 0;
}