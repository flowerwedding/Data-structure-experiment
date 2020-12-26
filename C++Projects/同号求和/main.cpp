#include <iostream>

using namespace std;

int main(){
	int a,b;
	
	cout <<"Input a,b:";
	cin >>a >> b;
	
	if (a*b>0){
		cout << "Result:"<<a+b<<endl;
	}else{
		cout << "Result:0\n";
	}
	
	return 0;
} 
