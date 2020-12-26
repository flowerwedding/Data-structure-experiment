#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int num,j,count,m,len;
	char c[10000]={0};
	
	cin >> num;
	while(num --){
		cin >> c;
		m = 0;
		count = 1;
		len = strlen(c);
		for(j = 0;j < len;j++){
			if(c[j] == c[j + 1]){
				count ++;
				continue;
			}else if(count != 1){
				cout << count; 
			}
			cout << c[j];
			count = 1;
		}
		cout << endl;
	}
	
	return 0;
}

