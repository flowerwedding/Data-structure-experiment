#include <iostream>
using namespace std;

int main() {
	int n, i;
	long long a[100010] = {0},c,max = 0;
	
	cin >> n;
	
	for(i = 0;i < n;i ++){
		cin >> c;
		a[c] ++;
		if(c > max){
			max = c;
		}
	}
	
	for(i = max;i > 0;i --){
		if(a[i] % 2 == 1){
			cout << "Conan" << endl;
			return 0;
		}
	}
	
	cout << "Agasa" << endl;
	 
	return 0;
}
