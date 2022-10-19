#include <stdio.h>

// 类型转换
int main()
{
    // 自动类型转换
    // 参加运算的成员全部变成int类型的参加运算，结果也是int类型的
    printf("%d\n",5/2);

    // 出现了带小数点的实数，参加运算的成员全部变成double类型，结果也是double类型
    printf("%lf\n",5.0/2);

    // 当表达式中有有符号，也有无符号，参加运算的成员全部变成无符号，结果也是无符号
    int a = -8;
    unsigned int b = 7;
    if (a + b > 0) {
        printf("a + b > 0\n");
    } else {
        printf("a + b <= 0\n");
    }

    // 在赋值语句中等号右边的类型自动转换为等号左边的类型
    int c;
    float d = 5.8f;
    c = d;
    printf("c = %d\n",c);

    // 强制类型转换
    int x = 10;
    int y = 4;
    float w;
    w = (float)x / (float)y;
    printf("w = %f\n",w);
    return 0;
}
