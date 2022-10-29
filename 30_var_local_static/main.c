#include <stdio.h>

// 定义一个静态局部变量
// 在函数内部定义的使用static修饰的变量就是静态局部变量

void myfun() {
    // 普通局部变量
    // 如果普通局部变量不进行初始化，则默认是随机值
    int a;
    // 静态局部变量
    // 如果静态局部变量不进行初始化，则默认是0
    static int num;
    printf("a = %d\n",a);
    printf("num = %d\n",num);
}
int main()
{
    myfun();
    return 0;
}
