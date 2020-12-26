#include <iostream>
using namespace std;
 
int main() {
	char c, i, j;
	
	cout << "Please input a capital:" << endl;
	cin >> c;
	
	for(i = 'A'; i <= c; i ++){
		j = c - i;
		while(j --){
			cout << " ";
		}
		
		for(j = 'A';j <= i;j ++){
			cout << j;
		}
		
		for(j = i - 1;j >= 'A';j --){
			cout << j;
		}
		cout << endl;
	}
	
	return 0;
}
