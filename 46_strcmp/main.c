#include <stdio.h>

int main()
{
    // 使用strcmp比较两个字符串的内容是否一致
    char s1[] = "hello";
    char s2[] = "helle";
    int ret = strcmp(s1,s2);

    if (ret == 0) {
        printf("s1 = s1\n");
    } else if (ret > 0) {
        printf("s1 > s2\n");
    } else {
        printf("s1 < s2\n");
    }
    return 0;
}
