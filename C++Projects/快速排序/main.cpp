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
                j--; // 从右向左找第一个小于x的数
            if(i < j)
                a[i++] = a[j];
            while(i < j && a[i] < x)
                i++; // 从左向右找第一个大于x的数
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(l, i-1); /* 递归调用 */
        quick_sort(i+1, r); /* 递归调用 */
    }
}
int main(){
    printf("--快速排序--\n");
    printf("排序前:\n");
    int i;
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("排序后:\n");
    sort(0,7);
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
