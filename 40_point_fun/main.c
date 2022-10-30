#include <stdio.h>

void myfun1(int a,int b);
void test1();
void myfun2(int *p,int *q);

int main()
{
    test1();
    return 0;
}

// 函数的传参方式之复制传参：将实参的值传递给形参，不管形参怎么改变，根实参没有关系
void myfun1(int a,int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("in fun:a = %d,b = %d\n",a,b);
}

// 函数传参方式之地址传参
void myfun2(int *p,int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("in fun:*p = %d,*q = %d\n",*p,*q);
}

void test1() {
    int a = 100,b = 50;
    printf("before fun:a = %d,b = %d\n",a,b);
    myfun1(a,b);
    printf("after fun1:a = %d,b = %d\n",a,b);

    myfun2(&a,&b);
    printf("after fun:2a = %d,b = %d\n",a,b);
}