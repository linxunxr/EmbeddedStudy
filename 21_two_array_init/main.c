#include <stdio.h>

int main()
{
    // 初始化方式1：逐行初始化
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d\n",a[0][0]);
    printf("%d\n",a[0][1]);
    printf("%d\n",a[0][2]);
    printf("%d\n",a[1][0]);
    printf("%d\n",a[1][1]);
    printf("%d\n",a[1][2]);
    // 初始化方式2：局部初始化
    // 没有赋值的自动赋值为0
    int b[2][3] = {{1, 2}, {4}};
    printf("%d\n",b[0][0]);
    printf("%d\n",b[0][1]);
    printf("%d\n",b[0][2]);
    printf("%d\n",b[1][0]);
    printf("%d\n",b[1][1]);
    printf("%d\n",b[1][2]);

    return 0;
}
