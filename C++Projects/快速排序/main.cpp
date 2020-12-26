#include<stdio.h>

int a[] = {1,2,3,5,6,7,8,4};

void quick_sort(int l, int r){
    if (l < r){
        int i,j,x;

        i = l;
        j = r;
        x = a[i];
        while (i < j){
            while(i < j && a[j] > x)
                j--; // ���������ҵ�һ��С��x����
            if(i < j)
                a[i++] = a[j];
            while(i < j && a[i] < x)
                i++; // ���������ҵ�һ������x����
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(l, i-1); /* �ݹ���� */
        quick_sort(i+1, r); /* �ݹ���� */
    }
}
int main(){
    printf("--��������--\n");
    printf("����ǰ:\n");
    int i;
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("�����:\n");
    sort(0,7);
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
