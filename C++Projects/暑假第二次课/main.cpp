#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
	float sum = 0;
	int flag = -1, i, jiecheng = 1;//标识变量  
	
	for(i = 1;i <= 20;i ++){
		flag *= -1;
		jiecheng *= i;
		sum += (double)flag * 1 / jiecheng; 
	}
	
	printf("sum = %f\n", sum);
	
	return 0;
}
