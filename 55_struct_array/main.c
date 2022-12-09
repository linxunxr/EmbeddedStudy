#include <stdio.h>

typedef struct {
    int num;
    char name[32];
    float score;
}STU;

int main()
{
    // 定义一个结构体数组
    STU edu[3] = {
        {1001,"张三",78},
        {1002,"李四",90},
        {1003,"王五",50}
    };

    // 输出结构体数组中的元素
    int j;
    for (j = 0; j < 3; j++) {
        printf("%d - %s - %.2f\n",edu[j].num,edu[j].name,edu[j].score);
    }
    int i;
    float sum = 0;
    for (i = 0; i < 3; i++) {
        sum += edu[i].score;
    }
    printf("平均成绩为：%.2f\n",sum / 3);
    return 0;
}
