#include <stdio.h>

int main()
{
    // 不同类型的指针与变量需要强制转换
    int a = 0x1234,b = 0x5678;
    char *p1,*p2;
    printf("%#x %#x\n",a,b);
    p1 = (char *)&a;
    p2 = (char *)&b;
    printf("%#x %#x\n",*p1,*p2);
    // 字符型指针++ 指向下个字符数据，指针存放的地址编号+1
    p1++;
    p2++;
    printf("%#x %#x\n",*p1,*p2);
    return 0;
}
