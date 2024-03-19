#include <iostream>
#include <vector>
using namespace std;

string checkRepresentation(int x) {
    // Tạo một mảng động để lưu trữ các giá trị
    vector<bool> canRepresent(x + 1, false);
    
    // Số 1 luôn có thể biểu diễn được
    canRepresent[1] = true;

    // Duyệt qua từng số từ 2 đến x
    for (int i = 2; i <= x; i++) {
        // Kiểm tra xem số i có thể biểu diễn được không
        // Bằng cách thử tất cả các số 1 có thể được thêm vào tổng
        for (int j = 1; j < i; j++) {
            if (canRepresent[j] && i % j == 0) {
                canRepresent[i] = true;
                break;
            }
        }
    }
    
    // Kiểm tra xem x có thể biểu diễn được hay không
    if (canRepresent[x]) {
        return "YES";
    }
    return "NO";
}

int main() {
    int N;
    cin >> N;
    
    // Kiểm tra xem N có thể biểu diễn được hay không
    string result = checkRepresentation(N);
    
    // In kết quả
    cout << result << endl;
    
    return 0;
}