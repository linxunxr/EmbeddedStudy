#include <iostream>
using namespace std;

// 引用的本质是取别名

// 基本引用
void test01() {
    int a = 10;
    // 引用一旦初始化之后，不能改变引用的指向
    // 引用定义时必须初始化
    int &b = a;
    // 操作b相当于操作a本身
    b = 20;
    cout  << "a = " << a << endl;
}

// 数组的引用
void test02() {
    int a[5] = {1,2,3,4,5};
    int (&arr)[5] = a;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

// 函数的引用
void swap(int &x,int &y) {
    int temp = x;
    x = y;
    y = temp;
}
void test03() {
    int a = 10;
    int b = 20;
    cout << "交换前" << endl;
    cout << "a = " << a << " b = " << b << endl;
    swap(a,b);
    cout << "交换后" << endl;
    cout << "a = " << a << " b = " << b << endl;
}

int main() {
    test01();
    test02();
    test03();
    return 0;
}
