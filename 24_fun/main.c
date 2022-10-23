#include <stdio.h>

// 定义一个没有参数也没有返回值的函数
void myfun1() {
    printf("my first function\n");
}

// 定义一个有参数的函数
void myfun2(int a,int b) {
    int sum;
    sum = a + b;
    printf("%d + %d = %d\n",a,b,sum);
}

// 定义一个有返回值的函数
int myfun3(int a,int b) {
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    // 调用函数
    myfun1();
    myfun2(1,2);
    int sum = myfun3(1,2);
    printf("sum = %d\n",sum);
    return 0;
}
