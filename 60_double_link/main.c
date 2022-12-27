#include <stdio.h>
#include <stdlib.h>

// ������ṹ��
typedef struct student {
    // ������
    // ѧ��
    int number;
    // ����
    int score;
    // xingming
    char name[20];
    // ָ����
    // ������һ�����ĵ�ַ
    struct student *front;
    // ������һ�����ĵ�ַ
    struct student *next;
}STU;

// ˫������Ĵ���
void double_link_creat_head(STU **p_head,STU *p_new) {
    STU *p_mov = *p_head;
    // ����һ�μ�������Ϊ��ʱ
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->front = NULL;
        p_new->next = NULL;
    } else {
        // �ڶ��μ��Ժ��������
        while (p_mov->next != NULL) {
            // �ҵ�ԭ����������һ�����
            p_mov = p_mov->next;
        }
        // ��������Ľ���������
        p_mov->next = p_new;
        p_new->front = p_mov;
        p_new->next = NULL;
    }
}

void double_link_print(STU *head) {
    STU *pb;
    pb = head;
    while (pb->next != NULL) {
        printf("num = %d socre = %d name��%s\n",pb->number,pb->score,pb->name);
        pb = pb->next;
    }
    printf("num = %d socre = %d name��%s\n",pb->number,pb->score,pb->name);
    while (pb != NULL) {
        printf("num = %d score = %d name��%s\n",pb->number,pb->score,pb->name);
        pb = pb->front;
    }
}

// ˫�������ɾ��
void double_link_delete_numn(STU **p_head,int num) {
    STU *pb,*pf;
    pb = *p_head;
    // ����Ϊ�գ�����Ҫɾ��
    if(*p_head == NULL) {
        printf("����Ϊ�գ�û����Ҫɾ���Ľ��\n");
        return;
    }
    while ((pb->number != num) && (pb->next != NULL)) {
        pb = pb->next;
    }
    // �ҵ���һ������number��num��ͬ��ɾ��pbָ��Ľ��
    if (pb->number == num) {
        // �ҵ��Ľ����ͷ���
        if (pb == *p_head) {
            // ֻ��һ���������
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
        // �ͷ��ҵ��Ľ��
        free(pb);
        pb = NULL;
    } else {
        printf("û����Ҫɾ���Ľ��\n");
    }
}

// ˫�����������
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
    printf("�����������ʼ������\n");
    scanf("%d",&num);
    for (i = 0; i < num; i++) {
        // ����һ���½��
        p_new = (STU*) malloc(sizeof(STU));
        // ���½�㸳ֵ
        printf("������ѧ�š�������������\n");
        scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->name);
        // ���½���������
        double_link_creat_head(&head,p_new);
    }
    double_link_print(head);
    printf("��������Ҫɾ���Ľ���number��\n");
    scanf("%d",&num);
    double_link_delete_numn(&head,num);
    double_link_print(head);
    printf("��������Ҫ����Ľ���num score name\n");
    scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->name);
    double_link_insert_num(&head,p_new);
    double_link_print(head);
    return 0;
}
