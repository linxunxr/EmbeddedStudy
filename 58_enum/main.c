#include <stdio.h>

// 定义一个枚举类型
enum week {
    mon,tue,wed,thu,fri,sat,sun
};

int main()
{
    // 定义枚举类型的变量
    enum week day = mon;
    // 枚举元素本身由系统定义了一个表示序号的数值
    printf("day = %d\n",day);
    day = wed;
    printf("day = %d\n",day);
    return 0;
}
