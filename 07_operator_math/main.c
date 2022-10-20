#include <stdio.h>

// 算术运算符的使用
int main()
{
    int a = 40;
    int b = 6;

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    // printf 如果要输出%，需要加一个%
    printf("%d %% %d = %d\n",a,b,a%b);

    float c = 12.34;
    float d = 5.6;

    printf("%.4f + %.4f = %.4f\n",c,d,c+d);
    printf("%.4f - %.4f = %.4f\n",c,d,c-d);
    printf("%.4f * %.4f = %.4f\n",c,d,c*d);
    printf("%.4f / %.4f = %.4f\n",c,d,c/d);
    // 只有整数可以取余，浮点型数据不能取余
    // printf("%.4f %% %.4f = %.4f\n",c,d,c%d);

    return 0;
}
