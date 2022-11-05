#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 使用aoti将数字型字符串转化为整型数据
    char s1[] = "1234";
    int ret = atoi(s1);
    printf("ret = %d\n",ret);
    return 0;
}
