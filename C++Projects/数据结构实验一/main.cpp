#include <iostream>
#define MaxSize  100 
typedef int DataType; 
using namespace std;

struct SeqList{
    DataType list[MaxSize];
    int size;
};

/**
 * @Title  ʵ��һ˳����ʵ�ּ�Ӧ�� 
 * @Description ����һ�����Ա�������������Ԫ�� 1,2,3,4,5,6,7,8,9,10��
                ɾ������Ԫ�� 5��������ʾ��ǰ���Ա��е�����Ԫ�ء� 
 * @Author  2019210624����Ȼ 
 * @Update  2020/11/19  21:30 
 * @Notes   ���ִ���Ϊ��Ӧ��������C++�������޸�(��һ����C++û��C)  
**/

void ListInitiate(SeqList *L){/*��ʼ��˳���L*/
    L->size = 0;/*�����ʼ����Ԫ�ظ���*/
}
 
int ListLength(SeqList L){/*����˳���L�ĵ�ǰ����Ԫ�ظ���*/
    return L.size;
}

int ListInsert(SeqList *L, int i, DataType x){
/*��˳���L��λ��i��0 �� i �� size��ǰ��������Ԫ��ֵx*/ 
/*����ɹ�����1������ʧ�ܷ���0*/
    int j;
    if(L->size >= MaxSize){
        printf("˳��������޷�����! \n");
        return 0;
    }else if(i < 0 || i > L->size ){
        printf("����i���Ϸ�! \n");
        return 0;
	}else{ //TODO�˶γ�����һ������ 
        for(j = L->size; j > i; j--) L->list[j] = L->list[j - 1];/*Ϊ������׼��*/
        L->list[i] = x;/*����*/
        L->size ++;/*Ԫ�ظ�����1*/
        return 1;
	}
}

int ListDelete(SeqList *L, int i, DataType *x){
/*ɾ��˳���L��λ��i��0 �� i �� size - 1��������Ԫ��ֵ����ŵ�����x��*/
/*ɾ���ɹ�����1��ɾ��ʧ�ܷ���0*/
    int j;
    if(L->size <= 0){
        printf("˳����ѿ�������Ԫ�ؿ�ɾ! \n");
        return 0;
    }else if(i < 0 || i > L->size-1){
        printf("����i���Ϸ�");
        return 0;
	}else{//TODO�˶γ�����һ������
	    *x = L->list[i];/*����ɾ����Ԫ�ص�����x��*/
        for(j = i ; j < L->size ; j++) L->list[j] = L->list[j + 1];/*����ǰ��*/
        L->size--;/*����Ԫ�ظ�����1*/
        return 1;
    }
}

int ListGet(SeqList L, int i, DataType *x){
/*ȡ˳���L�е�i������Ԫ�ص�ֵ����x�У��ɹ��򷵻�1��ʧ�ܷ���0*/
    if(i < 0 || i > L.size-1){
        printf("����i���Ϸ�! \n");
        return 0;
	}else{
        *x = L.list[i];
        return 1;
	}
}

int ListMerge(SeqList *L3, SeqList L1,SeqList L2){
/*�������L1�������L2�ϲ��������L3�У��ɹ��򷵻�1��ʧ�ܷ���0*/
    if(L1.list == NULL || L2.list == NULL){
        printf("���������! \n");
        return 0;
	}
	L3->size = L1.size + L2.size;
	int i1 = 0, i2 = 0, i = 0; // i1Ϊ˳���L1���±꣬i2Ϊ˳���L2���±꣬iΪ˳���L3���±�  
	while(i1 < L1.size && i2 < L2.size){//��L1��L2�н�Сֵ����L3 
		if(L1.list[i1] >= L2.list[i2]){
			L3->list[i++] = L2.list[i2++];//L3��Ԫ�ز���Ϊ˳����룬������ListInsert() 
		}else{
			L3->list[i++] = L1.list[i1++];
		}
	} 
	while(i1 < L1.size){//L1ʣ�µ�Ԫ����ӵ�ĩβ 
		L3->list[i++] = L1.list[i1++];
	}
	while(i2 < L2.size){//L2ʣ�µ�Ԫ����ӵ�ĩβ 
		L3->list[i++] = L2.list[i2++];
	}
	return 1;
}

int main(){ 
    SeqList myList1, myList2, myList3;
    int i, x, t = 2;
    ListInitiate(&myList1);//�����ĳ�ʼ�� 
    ListInitiate(&myList2);
    ListInitiate(&myList3);

    while(t --){
    	i = 0;
    	while(cin >> x){//������Ԫ������ 
    	    if(t == 1) ListInsert(&myList1, i, x);
    	    if(t == 0) ListInsert(&myList2, i, x);
    	    i ++;
    	    if(cin.get() == '\n') break;
	    }
	}
   
    ListMerge(&myList3, myList1, myList2);
    for(i = 0; i < ListLength(myList3); i++){
        ListGet(myList3,i,&x); 
		printf("%d", x); 
	}
	return 0;
}

