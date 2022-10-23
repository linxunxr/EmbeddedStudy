#include <stdio.h>

// 定义一个静态全局变量
// 静态全局变量只能在定义的.c文件中使用，不能跨文件使用
static int num;

void myfun();

int main()
{
    printf("num = %d\n",num);
    myfun();
    printf("num = %d\n",num);
    return 0;
}

void myfun() {
    num++;
}
