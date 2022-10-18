#include <stdio.h>

// 测试基本数据类型的所占内存大小
int main()
{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;

    // sizeof:是一个运算符，可以获取数据类型所占内存的大小
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(e));
    printf("%d\n",sizeof(f));
    return 0;
}
