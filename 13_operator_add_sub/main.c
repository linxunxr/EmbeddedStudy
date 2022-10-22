#include <stdio.h>

// 自增自减运算符
int main()
{
    int a = 100;
    int b;
    b = a++;
    printf("a = %d,b = %d\n",a,b);
    int c;
    c = ++a;
    printf("a = %d,c = %d\n",a,c);
    return 0;
}
