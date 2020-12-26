#include <iostream>
long long fib(long long first,long long second,size_t n);
using namespace std; 

int main(){
	long long n, d[100],j = 0,i;
	
	while(cin >> n){
		d[j++] = fib(7,11,n%8);
	}	
	
	for(i = 0;i < j;i++){
		if(d[i] % 3 == 0){
			cout << "yes" <<endl;
		}else{
			cout << "no" <<endl;
		}
	}
	
	return 0;
}

long long fib(long long first,long long second,size_t n){
	if(n== 0){
		return 7;
	}
	if(n== 1){
		return 11;
	}
	if(2 == n){
		return (first % 3+second % 3) % 3;
	}
	
	return fib(second,first+second,n-1);	
}
