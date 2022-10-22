#include <stdio.h>

// if语句
int main()
{
    int n = 100;

    // 形式1：只有if
    // 如果为真，则执行if后面的语句，如果为假，则不执行
    if (n >= 50) {
        printf("a >= 50\n");
    }

    // 形式2：if...else...
    if (n >= 110) {
        printf("a >= 110\n");
    } else {
        printf("a < 110\n");
    }

    // 形式3：if...else if...else...
    if (n < 50) {
        printf("a < 50\n");
    } else if (n < 100) {
        printf("50 <= a < 100\n");
    } else {
        printf("a >= 100\n");
    }
    return 0;
}
