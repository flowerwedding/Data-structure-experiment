#include <iostream>

using namespace std;

int main(){
	int x;
	
	cin >> x;
	
	int b2,b1,b0;
	
	b2 = x/100;
	b1 = x%100/10;
	b0 = x%10;
	
    cout << "b2 = " << b2 << ", b1 = " << b1 << ", b0 = " << b0 << endl;
	return 0;
} 
