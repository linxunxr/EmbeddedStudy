#include <stdio.h>

int main()
{
    // 一般情况下，指针数组都用来保存多个字符串
    char *name[5] = {"first","second","third","forth","fifth"};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%s\n",name[i]);
    }
    return 0;
}
