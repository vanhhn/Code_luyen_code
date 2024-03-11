#include <iostream>
using namespace std;

int dem(int n) {
  if (n==2||n==3) {
    return 1;
  }
  else if(n==1) return 0;
  int ans = 1 + min(n % 2 + dem(n / 2),min(n % 3 + dem(n / 3), dem(n - 1)));
  return ans;
}

int main() {
  int n;
  cin >> n;
  cout << dem(n);
  return 0;
}