#include <stdio.h>

// 指针的运算
void test1();
void test2();
void test3();
void test4();

int main()
{
    test1();
    test2();
    test3();
    test4();
    return 0;
}

// 指针可以加一个整数，往下指几个它指向的变量，结果还是一个地址
void test1() {
    int a[10];
    int *p,*q;
    p = a;
    q = p + 2;
    printf("p = %p\n",p);
    printf("q = %p\n",q);
    return;
}

// 两个相同类型的指针可以比较大小
void test2() {
    int a[10];
    int *p,*q;
    p = &a[1];
    q = &a[6];
    if (p > q) {
        printf("p > q\n");
    } else if (p < q) {
        printf("p < q\n");
    } else {
        printf("p = q\n");
    }
}

// 两个相同类型的指针可以做减法
void test3() {
    int a[10];
    int *p,*q;
    p = &a[0];
    q = &a[3];
    printf("%d\n",q-p);
}

// 两个相同类型的指针可以相互赋值
void test4() {
    int a = 100;
    int *p,*q;
    p = &a;
    printf("a = %d %d\n",a,*p);
    q = p;
    printf("*q = %d\n",*q);
    *q = 999;
    printf("a = %d\n",a);
}
