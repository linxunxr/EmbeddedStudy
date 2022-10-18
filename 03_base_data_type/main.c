#include <stdio.h>

// 基本数据类型的学习和使用
// char short int long float double
int main()
{
    // 定义一个char类型的变量并赋值，输出字符使用%c
    char a = 'b';
    printf("a = %c\n",a);
    // 定义一个short类型的变量并赋值，输出short使用%d
    short b = 100;
    printf("b = %d\n",b);
    // 定义一个int类型的变量并赋值，输出int使用%d
    int c = 10000;
    printf("c = %d\n",c);
    // 定义一个long类型的变量并赋值，输出long使用%ld
    long d = 123456789;
    printf("d = %ld\n",d);
    // 定义一个float类型的变量并赋值，输出float使用%f
    // 默认保存小数点后六位，可以四舍五入
    float e = 3.1415926;
    printf("e = %f\n",e);
    // 定义一个double类型的变量并赋值，输出double使用%lf
    double f = 31232.654654156;
    printf("f = %lf\n",f);
    return 0;
}
