#include <iostream>
int yinzi(int i);

int main() {
	int i;
	
	for(i = 1;i <= 1000;i++){
		if(i == yinzi(i)){
			printf("һǧ���������У�%d\n",i);
		}
	}
	
	return 0;
}

int yinzi(int i){
	int ans = 0, j;
	
	for(j = 1; j < i;j++){
		if(i % j == 0){
			ans += j;
		}
	}
	
	return ans;
}
