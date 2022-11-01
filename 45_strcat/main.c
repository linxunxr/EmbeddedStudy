#include <stdio.h>
#include <string.h>

int main()
{
    // 使用strcat函数最佳字符串
    char s1[32] = "hello ";
    char s2[32] = "world";
    // strcat是从s1的\0的位置开始追加，知道s2的第一个\0复制完毕后结束
    strcat(s1,s2);
    printf("s1 = %s\n",s1);
    return 0;
}
