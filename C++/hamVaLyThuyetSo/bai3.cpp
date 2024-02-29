#include <iostream>
#include <cstring>
using namespace std;

#define MAX 10000001

int arr[MAX];

void snt() {
    for (int i = 2; i * i < MAX; i++) {
        if (arr[i]) {
            for (int j = i * i; j < MAX; j += i) {
                arr[j] = 0;
            }
        }
    }
}

int check(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c != '2' && c != '3' && c != '5' && c != '7') {
            return 0;
        }
    }
    return 1;
}

int main() {
    memset(arr, 1, sizeof(arr));
    arr[0] = arr[1] = 0;

    snt();

    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (arr[i] && check(i)) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}