#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int i, n, year, eryue, days, j;
	
	printf("��������ݣ�����һ��һ���ܼ�");
	scanf("%d%d",&year,&n);
	
	printf("%d�������:\n",year);
	if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)){
		eryue = 28;
	}else{
		eryue = 29;
	}
	
	for(i = 1;i <= 12;i ++){
		printf("%d��:\nһ\t��\t��\t��\t��\t��\t��\n",i);
	
	    for(j = 1;j < n % 7;j ++){
		    printf("\t");
	    }
	    
		switch (i) {
	    case 2: days = eryue; break;
	    case 4:
	    case 6:
	    case 9:
	    case 11: days = 30; break;
	    default: days = 31;
	    }
	    
	    for(j = 1;j <= days;j ++){
	        printf("%d\t",j);	
		    if ((j + n - 1) % 7 == 0) {
			    printf("\n");
		    }
	    }
	    printf("\n\n");
	    
	    n += days;
	} 
	
    return 0;
}
