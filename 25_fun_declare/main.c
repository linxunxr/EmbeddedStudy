#include <stdio.h>

// 函数的声明：一般当子函数在主函数的下方时，需要在主函数的上方进行声明
void myfun1();

int main()
{
    myfun1();
    return 0;
}

// 定义一个没有参数也没有返回值的函数
void myfun1() {
    printf("my first function\n");
}
