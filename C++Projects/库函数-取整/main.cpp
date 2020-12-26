#include <iostream>
int ceil(double num);

int main() {
	double num;
	int ans;
	
	printf("Input a real number:");
	scanf("%lf",&num);
	
	ans = ceil(num);
	
	printf("%d",ans); 
	
	return 0;
}

int ceil(double num){
	int ans;
	
	ans = num / 1;
	
	if(ans != num && num > 0){
		ans += 1;
	}
	
	return ans;
}
