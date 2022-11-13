#include <stdio.h>
#include <string.h>

// 定义结构体类型
typedef struct {
    int id;
    char name[32];
    char sex;
    int age;
}stu;


int main()
{
    // 定义变量与初始化
    stu zhangsan = {1001,"张三",'W',20};
    stu lisi;
    lisi.id = 1002;
    strcpy(lisi.name,"李四");
    lisi.sex = 'M';
    lisi.age = 21;

    // 结构体变量的使用
    printf("%d - %s - %c - %d\n",zhangsan.id,zhangsan.name,zhangsan.sex,zhangsan.age);
    printf("%d - %s - %c - %d\n",lisi.id,lisi.name,lisi.sex,lisi.age);


    return 0;
}
