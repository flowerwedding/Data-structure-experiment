#include <iostream>
using namespace std;
void yunsuan( double a , double b, double *add ,double *sub ,double *mul ,double *div);

int main() {
	double a,b, add , sub , mul ,div ;
	cout << "Input a,b:";
	cin >> a >> b;
	
	if (b == 0){
		cout << "Input error!" << endl;
	}else{
		yunsuan(a , b , &add , &sub, &mul, &div);
		cout << "ADD=" << add << endl
		     << "SUB=" << sub << endl
		     << "MUL=" << mul << endl
             << "DIV=" << div << endl; 
	}
	
	return 0;
}

void yunsuan( double a , double b, double *add ,double *sub ,double *mul ,double *div){
	*add = a + b;
	*sub = a - b;
	*mul = a * b;
	*div = a / b;
}
