#include <stdio.h>

int main()
{
    // 定义一个字符数组，通过scanf函数输入字符串并输出结果
    // 通过赋值""可以清除字符数组中的垃圾字符，让每一个元素都是\0
    char ch[32] = "";
    // 数组名就是当前数组的首地址
    scanf("%s",ch);
    printf("ch = %s\n",ch);
    return 0;
}
