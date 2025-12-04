#include <iostream>
using namespace std;

int main() {
    // 外層迴圈，控制乘數 i 從 1 到 9
    for (int i = 1; i <= 9; i++) {
        // 內層迴圈，控制被乘數 j 從 1 到 9
        for (int j = 1; j <= 9; j++) {
            // 輸出格式化的乘法結果，並且每一個結果後面加上 Tab
            cout << i << "x" << j << "=" << i * j << "\t";
        }
        // 每完成一行後換行
        cout << endl;
    }

    return 0;
}
