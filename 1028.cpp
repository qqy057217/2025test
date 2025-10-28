#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "请输入分数: ";
    cin >> score;
    
    // if-else语句
    if (score >= 90) {
        cout << "优秀" << endl;
    } else if (score >= 80) {
        cout << "良好" << endl;
    } else if (score >= 60) {
        cout << "及格" << endl;
    } else {
        cout << "不及格" << endl;
    }
    
    // switch语句
    switch(score / 10) {
        case 10:
        case 9:
            cout << "等级: A" << endl;
            break;
        case 8:
            cout << "等级: B" << endl;
            break;
        case 7:
            cout << "等级: C" << endl;
            break;
        default:
            cout << "等级: D" << endl;
    }
    
    // for循环
    cout << "倒计数: ";
    for (int i = 10; i > 0; i--) {
        cout << i << " ";
    }
    cout << endl;
    
    // while循环
    int num = 1;
    cout << "2的幂次方: ";
    while (num < 100) {
        cout << num << " ";
        num *= 2;
    }
    cout << endl;
    
    return 0;
}