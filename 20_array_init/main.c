#include <stdio.h>

int main()
{
    // 一维数组的初始化
    // 如果不初始化，直接使用会是随机值
    int a[4];
    int i;
    for (i = 0; i < 4; i++) {
        printf("%d\n",a[i]);
    }
    // 初始化方式1：全部初始化
    // int b[4] = {1, 2, 3, 4};
    // 如果全部初始化，可以不指定数组元素的个数
    int b[] = {1, 2, 3, 4};
    for (i = 0; i < 4; i++) {
        printf("%d\n",b[i]);
    }

    // 初始化方式2：局部初始化
    // 未初始化的位置的元素自动赋值为0
    int c[4] = {1, 2};
    for (i = 0; i < 4; i++) {
        printf("%d\n",c[i]);
    }

    return 0;
}
