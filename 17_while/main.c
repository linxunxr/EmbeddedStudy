#include <stdio.h>

// while循环
int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("1 + 2 + 3 + ... + 100 = %d\n",sum);
    return 0;
}
