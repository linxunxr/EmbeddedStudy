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

// 链表的创建
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

// 链表的遍历
void link_print(STU *head) {
    STU *p_mov;
    // 定义新的指针保存链表的首地址，防止使用head改变原本链表
    p_mov = head;
    // 当指针保存最后一个结点的指针域为NULL时，循环结束
    while (p_mov != NULL) {
        // 先打印当前指针保存结点的指针域
        printf("num = %d score = %d name:%s\n",p_mov->number,p_mov->score,p_mov->name);
        // 指针后移，保存下一个结点的地址
        p_mov = p_mov->next;
    }
}

// 链表的释放
void link_free(STU **p_head) {
    // 定义一个指针变量保存头结点的地址
    STU *pb = *p_head;
    while (*p_head != NULL) {
        // 先保存p_head指向的结点的地址
        pb = *p_head;
        // p_head保存下一个结点地址
        *p_head = (*p_head)->next;
        // 释放结点
        free(pb);
        // 防止野指针
        pb = NULL;
    }
}

// 链表节点的查找
// 按照学号查找
STU * link_search_num(STU *head,int num) {
    STU *p_mov;
    // 定义的指针变量保存第一个结点的地址
    p_mov = head;
    // 当没有达到最后一个结点的指针域时继续循环
    while (p_mov != NULL) {
        // 如果找到是当前结点的数据，则返回当前结点的地址
        if (p_mov->number == num) {
            return p_mov;
        }
        // 如果没有找到，则继续对比下一个结点的指针域
        p_mov = p_mov->next;
    }
    // 当循环结束的时候还没找到，说明要查找的数据不存在，返回NULL进行标识
    return NULL;
}

// 链表的删除
// 按照学号删除
void link_delete_num(STU **p_head,int num) {
    STU *pb,*pf;
    pb = pf = *p_head;
    // 链表为空，不用删除
    if (*p_head == NULL) {
        printf("链表为空，没有您要删除的结点");
        return;
    }
    // 循环查找要删除的结点
    while (pb->number != num && pb->next != NULL) {
        pf = pb;
        pb = pb->next;
    }
    // 找到了一个结点的nunber和num相同
    if (pb->number == num) {
        // 要删除的结点是头结点
        if (pb == *p_head) {
            // 让保存头结点的指针保存后一个结点的地址
            *p_head = pb->next;
        } else {
            // 前一个结点的指针保存要删除的后一个结点的地址
            pf->next = pb->next;
        }
        // 释放空间
        free(pb);
        pb = NULL;
    } else {
        // 没有找到
        printf("没有您要删除的结点\n");
    }
}

// 链表的插入
// 按学号的顺序插入
void link_insert_num(STU **p_head,STU *p_new) {
    STU *pb,*pf;
    pb = pf = *p_head;
    // 链表为空链表
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->next = NULL;
        return;
    }
    while ((p_new->number >= pb->number) && (pb->next != NULL)) {
        pf = pb;
        pb = pb->next;
    }
    // 找到一个结点的num比新来的结点的num大，查找pb的前面
    if (p_new->number < pb->number) {
        // 找到的结点是头结点，插在最前面
        if (pb == *p_head) {
            p_new->next = *p_head;
            *p_head = p_new;
        } else {
            pf->next = p_new;
            p_new->next = pb;
        }
    } else {
        // 没有找到pb的num比p_new->number大的结点，插在最后
        pb->next = p_new;
        p_new ->next = NULL;
    }
}

// 链表排序
void link_order(STU *head) {
    STU *pb,*pf,temp;
    pf = head;
    if (head == NULL){
        printf("链表为空，不用排序\n");
        return;
    }
    if (head->next == NULL) {
        printf("只有一个结点，不用排序\n");
        return;
    }
    // 以pf指向的结点为基准结点
    while (pf->next != NULL) {
        // pb从基准元素的下个元素开始
        pb = pf->next;
        while (pb != NULL) {
            if (pf->number > pb->number) {
                temp = *pb;
                *pb = *pf;
                *pf = temp;
                temp.next = pb->next;
                pb->next = pf->next;
                pf->next = temp.next;
            }
            pb = pb->next;
        }
        pf = pf->next;
    }
}

// 链表的逆序
STU *link_reverse(STU *head) {
    STU *pf,*pb,*r;
    pf = head;
    pb = pf->next;
    while (pb != NULL) {
        r = pb->next;
        pb->next = pf;
        pf = pb;
        pb = r;
    }
    head->next = NULL;
    head = pf;
    return head;
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
    link_print(head);
    link_order(head);
    link_print(head);
    // 查询学号
    printf("请输入您要查找学生的学号：\n");
    scanf("%d",&num);
    STU *pb = link_search_num(head,num);
    if (pb != NULL) {
        printf("找到了 num = %d score = %d name：%s\n",pb->number,pb->score,pb->name);
    } else {
        printf("没找找到您要查找的结点\n");
    }
    printf("请输入您要删除的结点的学号：");
    scanf("%d",&num);
    link_delete_num(&head,num);
    link_print(head);
    printf("请输入您要插入的结点 number score name\n");
    // 新申请一个结点
    p_new = (STU*) malloc(sizeof(STU));
    scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->score);
    link_insert_num(&head,p_new);
    link_print(head);

    head = link_reverse(head);
    link_print(head);
    link_free(&head);
    return 0;
}
