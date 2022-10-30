#include <stdio.h>

void test1();
void fun(int(*p)[5],int x,int y);
void test2();
void test3();

int main()
{
    test1();
    test2();
    test3();
    return 0;
}

// 定义数组指针
void test1() {
    // 定义一个3行5列的二维数组
    int a[3][5] = {0};
    // 定义一个数组指针变量p，p+1为下一个有5元素的整型数组
    int(*p)[5];
    printf("a = %p\n",a);
    printf("a+1 = %p\n",a+1);

    p = a;
    printf("p = %p\n",p);
    printf("p+1 = %p\n",p+1);
}

// 数组指针的用法
void fun(int(*p)[5],int x,int y) {
    p[0][1] = 101;
}

void test2() {
    int i,j;
    int a[3][5];
    fun(a,3,5);
    for (i = 0; i < 3;i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

// 二维数组的数组名降级问题
void test3() {
    int a[3][5];
    printf("a = %p\n",a);
    printf("a+1 = %p\n",a+1);

    printf("*a = %p\n",*a);
    printf("(*a)+1 = %p\n",(*a)+1);
}