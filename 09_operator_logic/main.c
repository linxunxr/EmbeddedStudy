#include <stdio.h>

// 逻辑运算符的使用
int main()
{
    int a  = 20;
    // 逻辑与两边都为真才为真
    int ret1 = a > 10 && a < 100;
    int ret2 = a> 10 && a < 19;
    printf("ret1 = %d\n",ret1);
    printf("ret2 = %d\n",ret2);

    // 逻辑或两边有一个为真则为真
    int ret3 = a > 10 || a < 19;
    printf("ret3 = %d\n",ret3);

    // 逻辑与的短路原则
    // 如果逻辑与左边的式子为假，右边的表达式不会执行
    int b = 100;
    ret1 = (a < 19) && (b += 10);
    printf("b = %d\n",b);
    // 逻辑或有与逻辑与类似的短路原则
    return 0;
}
