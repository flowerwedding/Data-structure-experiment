#include <iostream>
using namespace std;
 
int main() {
	int n, i, flag = 1;//标记变量 
	
	scanf("%d",&n);
	
	/*
	 素数 
	*/
	
	for(i = 2;i < n / 2 && flag == 1;i ++){
		if (n % i == 0){
			flag = 0;
		}
	}
	
	if (flag == 1){
		printf("%d is 素数", n);
	} else {
		printf("%d isn't 素数", n);
    }
	
	return 0;
}
