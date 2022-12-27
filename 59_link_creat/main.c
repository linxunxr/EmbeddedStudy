#include <stdio.h>
#include <stdlib.h>

// 定义结点结构体
typedef struct student {
    // 数据域
    // 学号
    int number;
    // 分数
    int score;
    // 姓名
    char name[20];
    // 指针域
    struct student *next;
}STU;

void link_creat_head(STU **p_head, STU *p_new) {
    STU *p_mov = *p_head;
    // 当第一次加入链表为空时，head执行p_new
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->next = NULL;
    } else {
        while (p_mov->next != NULL) {
            // 找到原有链表的最后一个结点
            p_mov = p_mov->next;
        }
        // 将新申请的结点加入链表
        p_mov->next = p_new;
        p_new->next = NULL;
    }
}

int main() {
    STU *head = NULL, *p_new = NULL;
    int num, i;
    printf("请输入链表初始个数：\n");
    scanf("%d",&num);
    for (i = 0; i < num; i++) {
        // 申请一个新结点
        p_new = (STU*) malloc(sizeof(STU));
        // 给新结点赋值
        printf("请输入学号、分数、姓名：\n");
        scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->name);
        // 将新结点加入链表
        link_creat_head(&head,p_new);
    }
    return 0;
}
