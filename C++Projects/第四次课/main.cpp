#include <iostream>
using namespace std;
 
int main() {
	int n, i, flag = 1;//��Ǳ��� 
	
	scanf("%d",&n);
	
	/*
	 ���� 
	*/
	
	for(i = 2;i < n / 2 && flag == 1;i ++){
		if (n % i == 0){
			flag = 0;
		}
	}
	
	if (flag == 1){
		printf("%d is ����", n);
	} else {
		printf("%d isn't ����", n);
    }
	
	return 0;
}
