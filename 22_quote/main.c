#include <stdio.h>

int main()
{
    // 一维数组的引用及遍历
    int a[6] = {11, 22, 33, 44, 55, 66};
    a[2] = 999;
    for (int i = 0; i < 6; i++) {
        printf("a[%d] = %d\n",i,a[i]);
    }

    // 二维数组的引用及遍历
    int b[3][4] = { 1, 2, 3, 4,
                    5, 6, 7, 8,
                    9, 10, 11, 12};
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 4; n++) {
            printf("%-4d",b[m][n]);
        }
        printf("\n");
    }
    return 0;
}
