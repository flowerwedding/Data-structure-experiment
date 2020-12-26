#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int arrive;//����ʱ�� 
    int treat;//��Ҫռ�õ�ʱ�� 
}QNODE;

typedef struct node{
    QNODE data;
    struct node*next;
}LNODE;

LNODE*front,*rear;
void in_Queue(QNODE e){
 	LNODE* p = (LNODE*)malloc(sizeof(LNODE));
 	p->data = e;
 	p->next = NULL;
 	if(!front)
 		front = rear = p;
 	else
 		rear = rear->next = p;
}

int out_Queue(QNODE*e){
 	LNODE* delp;
 	if(!front)
 		return 0;//�ӿ�
	*e = front->data;
	delp = front;
	front = front->next;
	if(!front)
		rear = NULL; 
	free(delp);
	return 1;
}
 
int main(){
 	char Fname[120];//��ȡ�ļ����ļ��� 
 	FILE*fp;
 	QNODE temp, curr;
 	//dwaitҵ��Ա�ܵĿ���ʱ�� clock��ǰʱ�� wait�ͻ��ܵĵȴ�ʱ�� 
	 //cout�ͻ�����  
 	int have=0,dwait=0,clock=0,wait=0,count=0,finish; 
 	printf("\n�����ļ�����"); 
 	scanf("%s",Fname);	
 	if((fp=fopen(Fname,"r"))==NULL)
 	{
 		printf("�ļ��򿪳���");
		 return 0; 
 	}
 	front=rear=NULL;
 	have= fscanf(fp,"%d %d",&temp.arrive,&temp.treat);
 	do{
 		if(!front&&!(have-2))
 		{
 			dwait+=temp.arrive-clock;
 			clock = temp.arrive;
 			in_Queue(temp);
			have= fscanf(fp,"%d %d",&temp.arrive,&temp.treat); 
 		}
 		count++;
 		out_Queue(&curr);
 		wait+=(clock-curr.arrive);
 		finish = clock+curr.treat;
 		while(!(have-2)&&temp.arrive<=finish)
 		{
 			in_Queue(temp);
 			have= fscanf(fp,"%d %d",&temp.arrive,&temp.treat);
 		}
 		clock = finish;
 	}while(!(have-2)||front);
 	printf("ҵ��Ա�ȴ�ʱ��_%d_�ͻ�ƽ���ȴ�ʱ��_%f_\n",dwait,(double)wait/count);
 	printf("ģ����ʱ��_%d_�ͻ�����_%d_�ܵȴ�ʱ��_%d_\n",clock,count,wait);
 	return 0;
}
