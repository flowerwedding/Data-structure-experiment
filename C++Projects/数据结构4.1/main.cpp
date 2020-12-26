#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int arrive;//到达时间 
    int treat;//需要占用的时间 
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
 		return 0;//队空
	*e = front->data;
	delp = front;
	front = front->next;
	if(!front)
		rear = NULL; 
	free(delp);
	return 1;
}
 
int main(){
 	char Fname[120];//读取文件的文件名 
 	FILE*fp;
 	QNODE temp, curr;
 	//dwait业务员总的空闲时间 clock当前时间 wait客户总的等待时间 
	 //cout客户总数  
 	int have=0,dwait=0,clock=0,wait=0,count=0,finish; 
 	printf("\n输入文件名称"); 
 	scanf("%s",Fname);	
 	if((fp=fopen(Fname,"r"))==NULL)
 	{
 		printf("文件打开出错");
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
 	printf("业务员等待时间_%d_客户平均等待时间_%f_\n",dwait,(double)wait/count);
 	printf("模拟总时间_%d_客户人数_%d_总等待时间_%d_\n",clock,count,wait);
 	return 0;
}
