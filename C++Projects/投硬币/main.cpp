#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, i ,head = 0, tail = 0;
	
	srand((unsigned)time(0)); //(1)
	
	for (i = 1;i <= 100;i++){
		//srand((unsigned)time(0));//(2)初始值设置一次才叫初始值，所以放循环外面 
	    x = rand() % 2;
	    
		if(x == 1){
			printf("Head. ");
			head ++;
		}else{
			printf("Tail. ");
			tail++;
		}
		if(i % 10 == 0){
			printf("\n");
		}
	}
	
	printf("Head facing up: %d\n",head);
	printf("Tail facing up: %d\n",tail);
	return 0;
}


