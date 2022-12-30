#include <iostream>
using namespace std;
// 命名空间的定义 必须定义在全局范围
// 命名空间下可以存放：变量 函数 结构体 类
namespace A{
    int a = 10;
}
namespace B{
    int a = 100;
    int b = 20;
}
// 命名空间可以重名，重名的空间箱单股合并操作
namespace B {
    int c = 100;
}

// 命名空间可以嵌套命名空间
namespace C {
    int a = 10;
    namespace D {
        int a = 20;
    }
}

// 如果命名空间没有名字，那么这个命名空间内的所有成员都被编译器加上了static修饰，只能被当前文件调用 属于内部链接属性

void test01() {
    cout << A::a << endl;
    cout << B::a << endl;
    cout << B::b << endl;
    cout << B::c << endl;
    cout << C::a << endl;
    cout << C::D::a << endl;
    // using声明可使得特定的标识符可用
    using A::a;
    cout << a << endl;
}

void test02() {
    // using编译指令使这个命名空间标识符可用
    // 当using声明的标识符和其他命名标识符有作用域冲突时，会产生二义性
    using namespace B;
    cout << a << endl;
    cout << b << endl;
}

int main() {
    test01();
    test02();
    return 0;
}
