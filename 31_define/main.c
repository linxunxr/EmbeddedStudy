#include <stdio.h>

// 宏定义的好处是只要改变了定义式的常量表达式，则代码中只要使用这个宏定义的位置都会改变
#define PI 3.1415926

// 带参宏
// 带参宏类似于一个简单的函数，将函数的参数进行设置，就可以传递到对应的表达式
#define S(a,b) ((a)*(b))

int main()
{
    printf("PI = %lf\n",PI);
    double d = PI;
    printf("d = %lf\n",d);

    printf("%d\n",S(2,4));
    return 0;
}
