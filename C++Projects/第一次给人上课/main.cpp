#include <stdio.h>

int main(){
    int i, j;
    
    for(i=1; i<=9; i++){  //���forѭ��
        for(j=1; j<=i; j++){  //�ڲ�forѭ��
            printf("%d*%d=%-2d  ", i, j, i*j);
        }
        printf("\n");
    }
    
    return 0;
}
