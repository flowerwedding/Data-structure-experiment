#include <iostream>

using namespace std;

int main(){
	double r,V;
	const double pi=3.14159;
	
	printf("input r:");
	scanf("%lf",&r);
	
	V = 4*r*r*r*pi/3;
	
	printf("V = %lf",V);
	return 0;
} 
