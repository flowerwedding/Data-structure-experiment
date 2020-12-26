#include <iostream>
int isspace(char c);

int main() {
	char c;
	
	printf("Input a character:");
	scanf("%c",&c);
	
	if(isspace(c)){
		printf("It's a space.");
	}else{
		printf("%c isn't a space.",c);
	}
	
	return 0;
}

int isspace(char c){
	int flag = 0;
	
	if((c >= 'A'&&c <= 'Z')||(c >= 'a' &&c <= 'z')){
		flag = 1;
	}
	
	return flag;
}
