#include <stdio.h>
#include <stdlib.h>

void test1();
void test2();
int main()
{
    test1();
    test2();
    return 0;
}

void test1() {
    char *p;
    p = (char *) malloc(100);
    // 在100个字节后面追加50个字节
    // p指向的内存的新的大小为150个字节
    p = (char *) realloc(p,150);
}

void test2() {
    char *p;
    p = (char *) malloc(100);
    // 想重新申请大小为50个字节
    // p指向的内存新的大小为50个字节，原100个字节的后50个字节的存储空间被释放了
    p = (char *) realloc(p,50);
}