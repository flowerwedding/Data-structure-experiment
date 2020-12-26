#include <iostream>
#include<ctype.h>
using namespace std;
int main() {
	char s[100];
	int i = 0,count =0;
	cin.getline(s,100);
	while(s[i] != '\0'){
		if(iswupper(s[i])){
			count ++;
		}
		i++;
	} 
	cout << count;
	return 0;
}
