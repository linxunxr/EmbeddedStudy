#include <stdio.h>

// 逗号运算符
int main()
{
    int a = 10, b = 25;
    int c;
    // 逗号表达式的结果为最后一个的结果
    c = (a += 10, b += 10, a += b);
    printf("a  = %d, b = %d, c = %d\n",a,b,c);
    return 0;
}
