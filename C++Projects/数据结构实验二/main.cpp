#include <stdio.h>/*���ļ�����printf()�Ⱥ���*/
#include <stdlib.h>/*���ļ�����exit()�Ⱥ���*/
#include <malloc.h>/*���ļ�����malloc()�Ⱥ���*/
typedef int DataType;/*����DataTypeΪint*/
#include <iostream>
using namespace std;

typedef struct Node{
    DataType data;
    struct Node *next;
} SLNode;

/**
 * @Title       ʵ��������ʵ�ּ�Ӧ�� 
 * @Description ����һ�����Ա�������������Ԫ�� 1,2,3,4,5,6,7,8,9,10��
               ɾ������Ԫ�� 5��������ʾ��ǰ���Ա��е�����Ԫ�ء� 
 * @Author     2019210624����Ȼ 
 * @Update    2020/11/20  10:32 
 * @Notes     ���ִ���Ϊ��Ӧ��������C++�������޸�(��һ����C++û��C)  
**/

void ListInitiate(SLNode **head){/*��ʼ��*/
/*������ڴ�ռ䣬����ͷ���ռ䲢ʹͷָ��headָ��ͷ���*/
    if((*head = (SLNode *)malloc(sizeof(SLNode))) == NULL) exit(1);
    (*head)->next = NULL;/*����β���NULL */
}

int ListLength(SLNode *head){/* ������ĳ���*/
    SLNode *p = head;/*pָ����Ԫ���*/
    int size = 0;/*size��ʼΪ0*/

    while(p->next != NULL){/*ѭ������*/
        p = p->next;
        size ++;
	}
    return size;
}

int ListInsert(SLNode *head, int i, DataType x){
/*�ڴ�ͷ���ĵ�����head������Ԫ��ai��0 �� i �� size�����ǰ*/
/*����һ���������Ԫ��x�Ľ��*/
    SLNode *p, *q;
    int j;

    p = head; /*pָ����Ԫ���*/
    j = -1;/*j��ʼΪ-1*/
    while(p->next != NULL && j < i - 1){/*������ָ��pָ������Ԫ��ai-1���*/
	    p = p->next;
		j++;
    }

    if(j != i - 1){
        printf("����λ�ò�����");
        return 0;
	}

    /*�����½����ָ��qָʾ*/
    if((q = (SLNode *)malloc(sizeof(SLNode))) == NULL) exit(1);
    q->data = x;

    //TODO�˶γ�����һ������
    q->next = p->next;/*��ָ��q->next��ֵ*/
    p->next = q;/*��ָ��p->next���¸�ֵ*/
    return 1;
}

int ListDelete(SLNode *head, int i, DataType *x){
/*ɾ����ͷ���ĵ�����head������Ԫ��ai��0 �� i �� size - 1�����*/
/*ɾ����������Ԫ����ֵ��x���ء�ɾ���ɹ�ʱ����1��ʧ�ܷ���0*/
    SLNode *p, *s;
    int j;

    p = head; /*pָ����Ԫ���*/
    j = -1;/*j��ʼΪ-1*/
    while(p->next != NULL && p->next->next!= NULL && j < i - 1){
    /*������ָ��pָ������Ԫ��ai-1���*/
        p = p->next;
        j++;
    }

    if(j != i - 1){
        printf("ɾ��λ�ò�����"); 
        return 0;
    }

    //TODO�˶γ�����һ������
    s = p->next; /*ָ��sָ������Ԫ��ai���*/
    *x = s->data;/*��ָ��s��ָ��������Ԫ����ֵ����x*/
    p->next = s->next;/*������Ԫ��ai���ӵ�������ɾ��*/
    free(s);/*�ͷ�ָ��s��ָ�����ڴ�ռ�*/
    return 1;
}

int ListGet(SLNode *head, int i, DataType *x){
/*ȡ����Ԫ��ai��ɾ��������ͬ��ֻ�ǲ�ɾ������Ԫ��ai���*/
    SLNode *p;
    int j;

    p = head;
    j = -1;
    while(p->next != NULL && j < i){
        p = p->next;j++;
    }

    if(j != i){
        printf("ȡԪ��λ�ò�����");
        return 0;
	}

    //TODO�˶γ�����һ������
    *x = p->data;
    return 1;
}

void Destroy(SLNode **head){
    SLNode *p, *p1;

    p = *head;
    while(p != NULL){
        p1 = p;
        p = p->next;
        free(p1);
    }
    *head = NULL;
}

 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(1);
        ListNode* ret = head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                head->next = l1;
                l1 = l1->next;
            } else {
                head->next = l2;
                l2 = l2->next;
            }
            head = head->next;
        }
        head->next = l1 == NULL ? l2 : l1;
        return ret->next;
}
int main(){
    SLNode *head, *l1, *l2;
    int i , x;
    ListInitiate(&head);/*��ʼ��*/
    for(i = 0; i < 10;i ++){
        if(i % 2 == 1 && ListInsert(l1, i, i+1) == 0){ /*����10������Ԫ��*/
            printf("����! \n");
            return 0;
        }
        if(i % 2 == 0 && ListInsert(l2, i, i+1) == 0){ /*����10������Ԫ��*/
            printf("����! \n");
            return 0;
        }
    }

    head -> next = mergeTwoLists(l1,l2);
    for(i = 0; i < ListLength(head); i++){
        if(ListGet(head, i, &x) == 0){ /*ȡԪ��*/
            printf("����! \n");
            return 0;
        }else 
		    printf("%d    ", x);/*��ʾ����Ԫ��*/
    }

    Destroy(&head);
    return 1;
}

