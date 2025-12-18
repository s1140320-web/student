#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5] = {
        "Amy", "Ben", "Cindy", "David", "Eva"
    };

    int score[5][3] = {
        {80, 90, 85},
        {70, 75, 78},
        {88, 92, 95},
        {60, 65, 70},
        {90, 93, 89}
    };

    int totalSum = 0;  // 用來儲存所有學生所有科目的總和

    // 計算所有學生所有科目的總和
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            totalSum += score[i][j];  // 把每個成績加到總和中
        }
    }

    // 輸出總和
    cout << "Total Sum of all scores: " << totalSum << endl;

    return 0;
}
