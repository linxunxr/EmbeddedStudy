#include <stdio.h>

// 数组的定义
int main()
{
    // 定义一个一维数组
    int a[10];
    // 通过sizeof关键字可以获得数组的大小
    printf("sizeof(a) = %d %d\n",sizeof(a), 10 * sizeof(int));

    int b[] = {1, 2, 3};
    printf("sizeof(b) = %d\n",sizeof(b));

    printf("************************\n");

    // 定义一个二维数组
    int c[2][4];
    printf("sizeof(c) = %d %d\n",sizeof(c),2 * 4 * sizeof(int));

    // 二维数组的行数可以省略，但是列数不能省略
    int d[][4] = {1, 2, 3, 4, 5};
    printf("sizeof(d) = %d\n",sizeof(d));
    return 0;
}
