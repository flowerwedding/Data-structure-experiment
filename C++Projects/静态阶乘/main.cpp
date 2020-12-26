#include <iostream>
double fac(int i);

int main() {
	int n , i;
	double result;
	
	printf("Input n:");
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++){
		result = fac(i);
	}
	
	printf("%d != %g\n",n,result);
	 
	return 0;
}

double fac(int i){
	static double ans = 1;
	
	ans *= i;
	
	return ans;
}
