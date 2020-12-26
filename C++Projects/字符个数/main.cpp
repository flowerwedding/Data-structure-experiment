#include <iostream>
using namespace std;
int main() {
	char s[100],c;
	int i = 0,count =0;
	cin.getline(s,100);
	cin >> c;
	while(s[i] != '\0'){
		if(s[i] == c){
			count ++;
		}
		i++;
	} 
	cout << count;
	return 0;
}
