#include <iostream>
#define MaxSize  100 
typedef int DataType; 
using namespace std;

struct SeqList{
    DataType list[MaxSize];
    int size;
};

/**
 * @Title  实验一顺序表的实现及应用 
 * @Description 建立一个线性表；依次输入数据元素 1,2,3,4,5,6,7,8,9,10；
                删除数据元素 5；依次显示当前线性表中的数据元素。 
 * @Author  2019210624沈怡然 
 * @Update  2020/11/19  21:30 
 * @Notes   部分代码为适应编译器及C++而有所修改(大一修了C++没修C)  
**/

void ListInitiate(SeqList *L){/*初始化顺序表L*/
    L->size = 0;/*定义初始数据元素个数*/
}
 
int ListLength(SeqList L){/*返回顺序表L的当前数据元素个数*/
    return L.size;
}

int ListInsert(SeqList *L, int i, DataType x){
/*在顺序表L的位置i（0 ≤ i ≤ size）前插入数据元素值x*/ 
/*插入成功返回1，插入失败返回0*/
    int j;
    if(L->size >= MaxSize){
        printf("顺序表已满无法插入! \n");
        return 0;
    }else if(i < 0 || i > L->size ){
        printf("参数i不合法! \n");
        return 0;
	}else{ //TODO此段程序有一处错误 
        for(j = L->size; j > i; j--) L->list[j] = L->list[j - 1];/*为插入做准备*/
        L->list[i] = x;/*插入*/
        L->size ++;/*元素个数加1*/
        return 1;
	}
}

int ListDelete(SeqList *L, int i, DataType *x){
/*删除顺序表L中位置i（0 ≤ i ≤ size - 1）的数据元素值并存放到参数x中*/
/*删除成功返回1，删除失败返回0*/
    int j;
    if(L->size <= 0){
        printf("顺序表已空无数据元素可删! \n");
        return 0;
    }else if(i < 0 || i > L->size-1){
        printf("参数i不合法");
        return 0;
	}else{//TODO此段程序有一处错误
	    *x = L->list[i];/*保存删除的元素到参数x中*/
        for(j = i ; j < L->size ; j++) L->list[j] = L->list[j + 1];/*依次前移*/
        L->size--;/*数据元素个数减1*/
        return 1;
    }
}

int ListGet(SeqList L, int i, DataType *x){
/*取顺序表L中第i个数据元素的值存于x中，成功则返回1，失败返回0*/
    if(i < 0 || i > L.size-1){
        printf("参数i不合法! \n");
        return 0;
	}else{
        *x = L.list[i];
        return 1;
	}
}

int ListMerge(SeqList *L3, SeqList L1,SeqList L2){
/*将有序表L1和有序表L2合并成有序表L3中，成功则返回1，失败返回0*/
    if(L1.list == NULL || L2.list == NULL){
        printf("有序表不存在! \n");
        return 0;
	}
	L3->size = L1.size + L2.size;
	int i1 = 0, i2 = 0, i = 0; // i1为顺序表L1的下标，i2为顺序表L2的下标，i为顺序表L3的下标  
	while(i1 < L1.size && i2 < L2.size){//将L1和L2中较小值插入L3 
		if(L1.list[i1] >= L2.list[i2]){
			L3->list[i++] = L2.list[i2++];//L3的元素插入为顺序插入，无需用ListInsert() 
		}else{
			L3->list[i++] = L1.list[i1++];
		}
	} 
	while(i1 < L1.size){//L1剩下的元素添加到末尾 
		L3->list[i++] = L1.list[i1++];
	}
	while(i2 < L2.size){//L2剩下的元素添加到末尾 
		L3->list[i++] = L2.list[i2++];
	}
	return 1;
}

int main(){ 
    SeqList myList1, myList2, myList3;
    int i, x, t = 2;
    ListInitiate(&myList1);//有序表的初始化 
    ListInitiate(&myList2);
    ListInitiate(&myList3);

    while(t --){
    	i = 0;
    	while(cin >> x){//有序表的元素输入 
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

