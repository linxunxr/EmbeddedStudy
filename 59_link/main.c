#include <stdio.h>
#include <stdlib.h>

// ������ṹ��
typedef struct student {
    // ������
    // ѧ��
    int number;
    // ����
    int score;
    // ����
    char name[20];
    // ָ����
    struct student *next;
}STU;

// ����Ĵ���
void link_creat_head(STU **p_head, STU *p_new) {
    STU *p_mov = *p_head;
    // ����һ�μ�������Ϊ��ʱ��headִ��p_new
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->next = NULL;
    } else {
        while (p_mov->next != NULL) {
            // �ҵ�ԭ����������һ�����
            p_mov = p_mov->next;
        }
        // ��������Ľ���������
        p_mov->next = p_new;
        p_new->next = NULL;
    }
}

// ����ı���
void link_print(STU *head) {
    STU *p_mov;
    // �����µ�ָ�뱣��������׵�ַ����ֹʹ��head�ı�ԭ������
    p_mov = head;
    // ��ָ�뱣�����һ������ָ����ΪNULLʱ��ѭ������
    while (p_mov != NULL) {
        // �ȴ�ӡ��ǰָ�뱣�����ָ����
        printf("num = %d score = %d name:%s\n",p_mov->number,p_mov->score,p_mov->name);
        // ָ����ƣ�������һ�����ĵ�ַ
        p_mov = p_mov->next;
    }
}

// ������ͷ�
void link_free(STU **p_head) {
    // ����һ��ָ���������ͷ���ĵ�ַ
    STU *pb = *p_head;
    while (*p_head != NULL) {
        // �ȱ���p_headָ��Ľ��ĵ�ַ
        pb = *p_head;
        // p_head������һ������ַ
        *p_head = (*p_head)->next;
        // �ͷŽ��
        free(pb);
        // ��ֹҰָ��
        pb = NULL;
    }
}

// ����ڵ�Ĳ���
// ����ѧ�Ų���
STU * link_search_num(STU *head,int num) {
    STU *p_mov;
    // �����ָ����������һ�����ĵ�ַ
    p_mov = head;
    // ��û�дﵽ���һ������ָ����ʱ����ѭ��
    while (p_mov != NULL) {
        // ����ҵ��ǵ�ǰ�������ݣ��򷵻ص�ǰ���ĵ�ַ
        if (p_mov->number == num) {
            return p_mov;
        }
        // ���û���ҵ���������Ա���һ������ָ����
        p_mov = p_mov->next;
    }
    // ��ѭ��������ʱ��û�ҵ���˵��Ҫ���ҵ����ݲ����ڣ�����NULL���б�ʶ
    return NULL;
}

// �����ɾ��
// ����ѧ��ɾ��
void link_delete_num(STU **p_head,int num) {
    STU *pb,*pf;
    pb = pf = *p_head;
    // ����Ϊ�գ�����ɾ��
    if (*p_head == NULL) {
        printf("����Ϊ�գ�û����Ҫɾ���Ľ��");
        return;
    }
    // ѭ������Ҫɾ���Ľ��
    while (pb->number != num && pb->next != NULL) {
        pf = pb;
        pb = pb->next;
    }
    // �ҵ���һ������nunber��num��ͬ
    if (pb->number == num) {
        // Ҫɾ���Ľ����ͷ���
        if (pb == *p_head) {
            // �ñ���ͷ����ָ�뱣���һ�����ĵ�ַ
            *p_head = pb->next;
        } else {
            // ǰһ������ָ�뱣��Ҫɾ���ĺ�һ�����ĵ�ַ
            pf->next = pb->next;
        }
        // �ͷſռ�
        free(pb);
        pb = NULL;
    } else {
        // û���ҵ�
        printf("û����Ҫɾ���Ľ��\n");
    }
}

// ����Ĳ���
// ��ѧ�ŵ�˳�����
void link_insert_num(STU **p_head,STU *p_new) {
    STU *pb,*pf;
    pb = pf = *p_head;
    // ����Ϊ������
    if (*p_head == NULL) {
        *p_head = p_new;
        p_new->next = NULL;
        return;
    }
    while ((p_new->number >= pb->number) && (pb->next != NULL)) {
        pf = pb;
        pb = pb->next;
    }
    // �ҵ�һ������num�������Ľ���num�󣬲���pb��ǰ��
    if (p_new->number < pb->number) {
        // �ҵ��Ľ����ͷ��㣬������ǰ��
        if (pb == *p_head) {
            p_new->next = *p_head;
            *p_head = p_new;
        } else {
            pf->next = p_new;
            p_new->next = pb;
        }
    } else {
        // û���ҵ�pb��num��p_new->number��Ľ�㣬�������
        pb->next = p_new;
        p_new ->next = NULL;
    }
}

// ��������
void link_order(STU *head) {
    STU *pb,*pf,temp;
    pf = head;
    if (head == NULL){
        printf("����Ϊ�գ���������\n");
        return;
    }
    if (head->next == NULL) {
        printf("ֻ��һ����㣬��������\n");
        return;
    }
    // ��pfָ��Ľ��Ϊ��׼���
    while (pf->next != NULL) {
        // pb�ӻ�׼Ԫ�ص��¸�Ԫ�ؿ�ʼ
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

// ���������
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
    printf("�����������ʼ������\n");
    scanf("%d",&num);
    for (i = 0; i < num; i++) {
        // ����һ���½��
        p_new = (STU*) malloc(sizeof(STU));
        // ���½�㸳ֵ
        printf("������ѧ�š�������������\n");
        scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->name);
        // ���½���������
        link_creat_head(&head,p_new);
    }
    link_print(head);
    link_order(head);
    link_print(head);
    // ��ѯѧ��
    printf("��������Ҫ����ѧ����ѧ�ţ�\n");
    scanf("%d",&num);
    STU *pb = link_search_num(head,num);
    if (pb != NULL) {
        printf("�ҵ��� num = %d score = %d name��%s\n",pb->number,pb->score,pb->name);
    } else {
        printf("û���ҵ���Ҫ���ҵĽ��\n");
    }
    printf("��������Ҫɾ���Ľ���ѧ�ţ�");
    scanf("%d",&num);
    link_delete_num(&head,num);
    link_print(head);
    printf("��������Ҫ����Ľ�� number score name\n");
    // ������һ�����
    p_new = (STU*) malloc(sizeof(STU));
    scanf("%d %d %s",&p_new->number,&p_new->score,&p_new->score);
    link_insert_num(&head,p_new);
    link_print(head);

    head = link_reverse(head);
    link_print(head);
    link_free(&head);
    return 0;
}
