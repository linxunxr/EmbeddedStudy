#include <iostream>
using namespace std;

int a = 100;
void test01() {
    int a = 10;
    // 输出局部变量a
    cout << a << endl;
    // ::运算符是一个作用域，如果::前面什么都没有加 代表是全局作用域
    // 输出全局变量a
    cout << ::a << endl;
}

int main() {
    test01();
    return 0;
}
