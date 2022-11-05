#include <stdio.h>
#include <string.h>

int main()
{
    // 使用strstr函数在一个字符串中查找另一个字符串
    char s[] = "12345678910";
    // strstr查找的时候，查找的是第二个参数的第一个\0之前的内容
    char *ret = strstr(s,"456");
    if (ret == NULL) {
        printf("没有找到！\n");
    } else {
        printf("找到了，位置：%d\n",ret - s);
    }
    return 0;
}
