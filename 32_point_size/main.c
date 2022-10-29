#include <stdio.h>

// 在32位操作系统下，所有类型的指针都是4个字节，64位是8个字节
int main()
{
    char *a;
    short *b;
    int *c;
    long *d;
    float *e;
    double *f;

    printf("sizeof(a) = %d\n",sizeof(a));
    printf("sizeof(b) = %d\n",sizeof(b));
    printf("sizeof(c) = %d\n",sizeof(c));
    printf("sizeof(d) = %d\n",sizeof(d));
    printf("sizeof(e) = %d\n",sizeof(e));
    printf("sizeof(f) = %d\n",sizeof(f));
    return 0;
}
