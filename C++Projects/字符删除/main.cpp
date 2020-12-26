#include <iostream>
using namespace std; 
int main() {
	char s[100], c;
	int i = 0;
	cout <<"Input a string:";
	cin >> s;
	cout << "Input a char:";
	cin >>c;
	cout <<"Result:";
	while(s[i] != '\0'){
		if(s[i] != c){
			cout << s[i];
		}
		i++;
	}
	return 0;
}
