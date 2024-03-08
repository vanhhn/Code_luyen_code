#include <iostream>
#include <cstring>
using namespace std;

int n, k, a[100];

void init() {
  cin >> n >> k;
}

void in() {
  for (int i = 1; i <= n; i++) {
    cout << a[i];
  }
  cout << " ";
}

bool check1() {
  int d = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i]==1) {
      d++;
    }
  }
  return d == k;
}

void Try1(int i) {
  for (int j = 0; j <= 1; j++) {
    a[i] = j;
    if (i == n) {
      if(check1())in();
    } else {
      Try1(i + 1);
    }
  }
}

bool check2() {
  int d = 0, ans = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] == 1) {
      d++;
      if (d == k) {
        ans++;
      } else if (d > k) {
        return 0;
      }
    } else {
      d = 0;
    }
  }
  return ans == 1;
}

void Try2(int i) {
  for (int j = 0; j <= 1; j++) {
    a[i] = j;
    if (i == n) {
      if(check2())in();
    } else {
      Try2(i + 1);
    }
  }
}

int main() {
  init();
  Try1(1);
  memset(a, 0, sizeof(a));
  cout << endl;
  Try2(1);
  system("pause");
  return 0;
}