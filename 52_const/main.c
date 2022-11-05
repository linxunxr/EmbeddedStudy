#include <stdio.h>

// const修饰全局变量
// 此时全局变量只能使用但是不能修改
// 如果直接拿全局变量修改值，编译报错
// 如果使用全局变量的地址修改值，运行时程序异常结束
const int a = 100;

void test1();
void test2();
void test3();

int main()
{
    test1();
    test2();
    return 0;
}

void test1() {
    printf("a = %d\n",a);

    // 无法修改，报错
    // a = 111;
    
    // 无法修改
    // int *p = &a;
    // *p = 222;
}

// const修饰局部变量
// 可以读取变量的值
// 不能直接通过变量进行修改值
// 可以通过变量的地址修改值
void test2() {
    const int b = 100;
    
    // b =  111;

    int *p = &b;
    *p = 222;
    printf("b = %d\n",b);
}

// const修饰指针变量
// 如果const修饰指针变量的类型，无法通过指针变量修改地址里面的值
// 如果const修饰指针变量，无法修改指针变量保存的地址
// 如果cosnt既修饰指针变量的类型，又修饰指针变量，则只能通过原本变量修改值
void test3() {
    int c = 100;
    // const int *p = &c;
    int * const p = &c;
    printf("*p = %d\n",*p);

    c = 111;
    printf("*p = %d\n",*p);

    // const修饰指针变量类型报错
    // *p = 222;
    
    int d = 333;
    // const修饰指针变量报错
    // p = &d;
}
