#include <iostream>
using namespace std;

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node* Merge(Node* head1, Node* head2){  //�ϲ��������������һ����������
	if(head1 == NULL)
		return head2;
	if(head2 == NULL)
		return head1;
	Node *head, *p1, *p2;
	if(head1->data < head2->data)   //ȷ���úϲ����ͷ���
	{
		head = head1;
		p1 = head1->next;
		p2 = head2;
	}
	else
	{
		head = head2;
		p1 = head1;
		p2 = head2->next;
	}	
	Node *move = head;   //����һ���ƶ�ָ��,����������������һ��
	while(p1 && p2)
	{
		if(p1->data <= p2->data)
		{
			move->next = p1;
			move = p1;
			p1 = p1->next;
		}
		else if(p1->data > p2->data)
		{
			move->next = p2;
			move = p2;
			p2 = p2->next;
		}
	}
	if(p1)
		move->next = p1;     // ����p1ʣ��δ�ȽϵĽڵ�
	if(p2)
		move->next = p2;     // ����p2ʣ��δ�ȽϵĽڵ�
	return head;
}

Node* Creat(){//�������Ԫ��0��ʾ������� 
	Node *head,*p,*s;
	head = new Node;
	if(head == NULL)
		printf("ͷ��㴴��ʧ��!\n");
	
	p = head;
	int x;
	char cycle = 1;
	while(cycle)
	{
		cin >> x;
		if(x != 0)
		{
			s = new Node;
			s->data = x;
			p->next = s;
			p = s;	
		}
		else
			cycle = 0;		
	}
	head = head->next;
	p->next = NULL;
    return head;	
}

void Print(Node *head){
	Node *p = head;
	while(p)
	{
		printf("%d  ",p->data);
		p = p->next;
	}
	printf("\n");
}

int main(){
	Node *head1 = Creat();
	Node *head2 = Creat();
	Node *head3 = Merge(head1, head2);
	Print(head3);
	
	return 0;
}
