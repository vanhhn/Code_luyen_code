#include <iostream>
#include <vector>

using namespace std;

vector<int> findIntersection(vector<int>& a, vector<int>& b) {
    vector<int> intersection;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            intersection.push_back(a[i]);
            i++;
            j++;
        }
    }

    return intersection;
}

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    vector<int> uni;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            uni.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            uni.push_back(b[j]);
            j++;
        } else {
            uni.push_back(a[i]);
            i++;
            j++;
        }
    }

    while (i < a.size()) {
        uni.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        uni.push_back(b[j]);
        j++;
    }

    return uni;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> intersection = findIntersection(a, b);
    vector<int> unionArr = findUnion(a, b);

    for (int i = 0; i < unionArr.size(); i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;

    return 0;
}