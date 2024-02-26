#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> arr;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        arr.insert(num);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int type, X;
        cin >> type >> X;

        if (type == 1) {
            arr.insert(X);
        } else if (type == 2) {
            if (arr.count(X) > 0) {
                arr.erase(X);
            }
        } else if (type == 3) {
            if (arr.count(X) > 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}