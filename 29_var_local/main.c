#include <stdio.h>

void myfun();

int main()
{
    myfun();
    // 局部变量只能在定义的函数内部使用，生命周期相对较短，函数结束，局部变量就不能使用
    return 0;
}

void myfun() {
    // 定义一个局部变量
    int num = 100;
    printf("%d\n",num);
}
