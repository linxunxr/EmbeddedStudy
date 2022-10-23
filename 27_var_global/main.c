#include <stdio.h>

// 定义一个普通全局变量
// 如果没有进行初始化，则系统自动将其初始化为0
int num;

void myfun();
int main()
{
    printf("num = %d\n",num);
    myfun();
    printf("num = %d\n",num);
    return 0;
}

void myfun() {
    num = 5;
}
