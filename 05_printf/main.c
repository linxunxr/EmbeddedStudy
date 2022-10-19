#include <stdio.h>

// 格式化输出字符的使用
int main()
{
    // 输出整数
    int a =100;
    // 输出十进制数
    printf("a = %d\n",a);
    // 输出八进制数
    printf("a = %o\n",a);
    // 加上八进制数前导符
    printf("a = %#o\n",a);
    // 输出十六进制数
    printf("a = %#x\n",a);

    // 输出浮点型数据
    float b = 3.1415926;
    double c = 1234.1234;
    printf("b = %f\n",b);
    printf("c = %lf\n",c);

    // 输出字符，使用%c输出字符，使用%d输出字符的ASCII值
    char d = 'a';
    printf("d = %c %d\n",d,d);

    // 输出字符串
    // 一般使用数组来保存
    char e[] = "hello world";
    printf("e = %s\n",e);

    // 输出地址
    int f = 123;
    printf("&f = %p\n",&f);

    printf("***********************\n");

    int g= 123;
    printf("%d%d\n",g,g);
    // %nd，输出的宽度为n，右对齐，实际数据不足则左补空格
    printf("%5d%5d\n",g,g);
    // %0nd，输出的宽度为n，右对齐，实际数据不足则左补零
    printf("%05d%05d\n",g,g);
    // %-nd，输出的宽度为n，左对齐，实际数据不足则右补空格
    printf("%-5d%-5d\n",g,g);

    float h = 3.14;
    printf("n = %f\n",h);
    // %.2f，小数点后保留两位并且可以四舍五入
    printf("n = %.2f\n",h);

    return 0;
}
