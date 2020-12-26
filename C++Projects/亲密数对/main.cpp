#include <iostream>
int yinzi(int i); 

int main() {
	int x , y;
	
	for(x = 1; x <= 3000;x++){
		y = yinzi(x);
		if(y > x && yinzi(y) == x){
			printf("(%d,%d)\n",x,y);
		}
	} 
	
	return 0;
}

int yinzi(int i){
	int j, ans = 0;
	
	for(j = 1; j < i;j++){
		if(i % j == 0){
			ans += j;
		}
	}
	
	return ans;
}
