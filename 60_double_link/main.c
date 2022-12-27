#include <stdio.h>
#include <stdlib.h>

// 定义结点结构体
typedef struct student {
    // 数据域
    // 学号
    int number;
    // 分数
    int score;
    // xingming
    char name[20];
    // 指针域
    // 保存上一个结点的地址
    struct student *front;
    // 保存下一个结点的地址
    struct student *next;
}STU;

// 双向链表的创建
void double_link_creat_head(STU **p_head,STU *p_new) {
    STU *p_mov = *p_head;
    // 当第一次加入链表为空时
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->front = NULL;
        p_new->next = NULL;
    } else {
        // 第二次及以后加入链表
        while (p_mov->next != NULL) {
            // 找到原有链表的最后一个结点
            p_mov = p_mov->next;
        }
        // 将新申请的结点加入链表
        p_mov->next = p_new;
        p_new->front = p_mov;
        p_new->next = NULL;
    }
}

void double_link_print(STU *head) {
    STU *pb;
    pb = head;
    while (pb->next != NULL) {
        printf("num = %d socre = %d name：%s\n",pb->number,pb->score,pb->name);
        pb = pb->next;
    }
    printf("num = %d socre = %d name：%s\n",pb->number,pb->score,pb->name);
    while (pb != NULL) {
        printf("num = %d score = %d name：%s\n",pb->number,pb->score,pb->name);
        pb = pb->front;
    }
}

// 双向链表的删除
void double_link_delete_numn(STU **p_head,int num) {
    STU *pb,*pf;
    pb = *p_head;
    // 链表为空，不需要删除
    if(*p_head == NULL) {
        printf("链表为空，没有您要删除的结点\n");
        return;
    }
    while ((pb->number != num) && (pb->next != NULL)) {
        pb = pb->next;
    }
    // 找到了一个结点的number和num相同，删除pb指向的结点
    if (pb->number == num) {
        // 找到的结点是头结点
        if (pb == *p_head) {
            // 只有一个结点的情况
            if ((*p_head)->next == NULL) {
                *p_head = pb->next;
            } else {
                *p_head = pb->next;
                (*p_head)->front = NULL;
            }
        } else {
            if (pb->next != NULL) {
                pf = pf->front;
                pf->next = pb->next;
                (pb->next)->front = pf;
            } else {
                pf = pb->front;
                pf->next = NULL;
            }
        }
        // 释放找到的结点
        free(pb);
        pb = NULL;
    } else {
        printf("没有您要删除的结点\n");
    }
}

// 双向链表插入结点
void double_link_insert_num(STU **p_head,STU *p_new) {
    STU *pb,*pf;
    pb = *p_head;
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->front = NULL;
        p_new->next = NULL;
        return;
    }
    while ((p_new->number >= pb->number) && (pb->next != NULL)) {
        pb = pb->next;
    }
    if (p_new->number < pb->number) {
        if (pb == *p_head) {
            p_new->next = *p_head;
            (*p_head)->front = p_new;
            p_new->front = NULL;
            *p_head = p_new;
        } else {
            pf = pb->front;
            p_new->next = pb;
            p_new->front = pf;
            pf->next = p_new;
            pb->front = p_new;
        }
    } else {
        pb->next = p_new;
        p_new->next->front = pb;
        p_new->next = NULL;
    }
}

int main()
{
    STU *head = NULL,*p_new = NULL;
    int num,i;
    printf("请输入链表初始个数：\n");
    scanf("%d",&num);
    for (i = 0; i < num; i++) {
        // 申请一个新结点
        p_new = (STU*) malloc(sizeof(STU));
        // 给新结点赋值
        printf("请输入学号、分数、姓名：\n");
        scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->name);
        // 将新结点加入链表
        double_link_creat_head(&head,p_new);
    }
    double_link_print(head);
    printf("请输入您要删除的结点的number：\n");
    scanf("%d",&num);
    double_link_delete_numn(&head,num);
    double_link_print(head);
    printf("请输入您要插入的结点的num score name\n");
    scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->name);
    double_link_insert_num(&head,p_new);
    double_link_print(head);
    return 0;
}
