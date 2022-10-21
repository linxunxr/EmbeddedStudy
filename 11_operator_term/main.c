#include <stdio.h>

// 三目运算符
int main()
{
    int a = 10 , b = 25;
    int c;
    c = (a > b) ? (a += 10) : (b += 10);
    printf("c = %d\n",c);
    printf("a  = %d, b = %d\n",a,b);
    return 0;
}
