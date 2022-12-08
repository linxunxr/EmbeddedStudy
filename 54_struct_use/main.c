#include <stdio.h>
#include <string.h>

struct stu {
    int id;
    char name[32];
    char sex;
    int age;
}zhangsan,lisi = {1002,"李四",'B',25};

typedef struct {
    int a;
    int b;
    char c;
}MSG;

void test01() {
    struct stu wangwu;
    struct stu zhaoliu = {1001,"赵六",'B',20};
    MSG msg2 = {100,200,'w'};

    // 结构体变量的使用
    zhangsan.id = 1003;
    strcpy(zhangsan.name,"张三");
    zhangsan.sex = 'B';
    zhangsan.age = 18;
    printf("%d - %s - %c - %d\n",zhangsan.id,zhangsan.name,zhangsan.sex,zhangsan.age);
    printf("%d - %s - %c - %d\n",lisi.id,lisi.name,lisi.sex,lisi.age);
    printf("%d - %s - %c - %d\n",zhaoliu.id,zhaoliu.name,zhaoliu.sex,zhaoliu.age);
    printf("%d - %d - %c\n",msg2.a,msg2.b,msg2.c);
}

// 在结构体中嵌套结构体
typedef struct {
    int year;
    int month;
    int day;
}BD;
typedef struct {
    int id;
    char name[32];
    BD birthday;
}STU;

void test02() {
    STU xiaoming;
    xiaoming.id = 1001;
    strcpy(xiaoming.name,"小明");
    // 如果结构体中嵌套结构体，赋值时找到最内层的成员再进行赋值
    xiaoming.birthday.year = 2022;
    xiaoming.birthday.month = 12;
    xiaoming.birthday.day = 8;
    printf("%d - %s - %d:%d:%d\n",xiaoming.id,xiaoming.name,xiaoming.birthday.year,xiaoming.birthday.month,xiaoming.birthday.day);
}

int main() {
    test01();
    test02();
    return 0;
}
