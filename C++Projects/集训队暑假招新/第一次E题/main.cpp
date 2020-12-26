#include <iostream>
using namespace std;

int main() {
	int n,i,num = 0;
	char c [55];
	
	cin >> n >> c;
	
	for(i = 1; ;i ++){
		num += i;
		if(num > n){
			break;
		}
		cout << c[num - 1];
	}
	
	return 0;
}
