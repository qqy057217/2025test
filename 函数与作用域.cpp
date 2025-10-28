#include <iostream>
using namespace std;

// 函数声明
int add(int a, int b);
void printMessage(const string& message);
int factorial(int n);

int main() {
    // 调用函数
    int sum = add(5, 3);
    cout << "5 + 3 = " << sum << endl;
    
    printMessage("Hello, C++!");
    
    int fact = factorial(5);
    cout << "5! = " << fact << endl;
    
    return 0;
}

// 函数定义
int add(int a, int b) {
    return a + b;
}

void printMessage(const string& message) {
    cout << "消息: " << message << endl;
}

// 递归函数示例
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}