#include<bits/stdc++.h>

using namespace std;
bool isPalindrome(int number) {
    string numStr = to_string(number);
    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return numStr == reversedStr;
}

int findLargestPalindrome(int limit) {
    int largestPalindrome = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (product < limit && isPalindrome(product)) {
                largestPalindrome = max(largestPalindrome, product);
                break;
            }
        }
    }
    return largestPalindrome;
}

int main() {
    int testCases;
   cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int limit;
       cin >> limit;
        int largestPalindrome = findLargestPalindrome(limit);
       cout << largestPalindrome <<endl;
    }

    return 0;
}