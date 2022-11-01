#include <stdio.h>
#include <string.h>

int main()
{
    // 使用strcpy函数拷贝字符串
    // 使用strcpy函数时，必须保证第一个参数的内存足够大
    char s1[32] = "hello";
    char s2[32] = "world";
    strcpy(s1,s2);
    printf("s1 = %s\n",s1);
    return 0;
}
