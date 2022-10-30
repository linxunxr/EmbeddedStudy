#include <stdio.h>

int main()
{
    int a = 10;
    // 定义一个一级指针，用来保存普通变量的地址
    int *p = &a;
    // 定义一个二级指针，用来保存一级指针的地址
    int **q = &p;

    printf("a = %d %d %d\n",a,*p,**q);
    printf("&a = %p %p %p\n",&a,p,*q);
    return 0;
}
