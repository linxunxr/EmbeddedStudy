#include <stdio.h>
#include <string.h>

int main()
{
    // 使用strchr函数在一个字符串中查找字符
    char s[] = "hello6 worl6d";
    // strchr找第一个匹配的字符
    // strrchr找最后一个匹配的字符
    char *ret = strchr(s,'6');

    if (ret == NULL) {
        printf("没有找到！\n");
    } else {
        printf("找到，pos = %d\n",ret - s);
    }
    return 0;
}
