#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {
    double height, weight, bmi;

    cout << "請輸入身高(cm): ";
    cin >> height;

    cout << "請輸入體重(kg): ";
    cin >> weight;

    // 將身高轉換為公尺
    height = height / 100.0;

    // 計算 BMI
    bmi = weight / (height * height);

    // 限制輸出小數點至兩位
    cout << fixed << setprecision(2);
    cout << "您的 BMI = " << bmi << endl;

    // BMI 分類
    if (bmi < 18.5)
        cout << "體重過輕" << endl;
    else if (bmi < 24)
        cout << "正常範圍" << endl;
    else if (bmi < 27)
        cout << "過重" << endl;
    else if (bmi < 30)
        cout << "輕度肥胖" << endl;
    else if (bmi < 35)
        cout << "中度肥胖" << endl;
    else
        cout << "重度肥胖" << endl;

    return 0;
}
