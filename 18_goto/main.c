#include <stdio.h>

// goto跳转
int main()
{
    printf("11111111111\n");
    goto NEXT;
    printf("2222222222222\n");
    printf("33333333333\n");
// goto标识符（自拟）
NEXT:
    printf("44444444444444\n");

    // goto实现循环
    int i = 1;
    int sum = 0;

JOOP:
    sum += i;
    i++;

    if (i <= 100) {
        goto JOOP;
    }

    printf("1 + 2 + 3 + ... + 100 = %d\n",sum);

    return 0;
}
