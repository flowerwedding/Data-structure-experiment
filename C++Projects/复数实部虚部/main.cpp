#include <iostream>
#include <cmath>
using namespace std; 

class Complex{
	public:
		Complex(double r,double i);
		~Complex();
		
		double getReal();
		double getImag();
		
		void setReal(double r);
		void setImag(double i);
		
		double abs();
	private:
		double real;
		double imag;
};

void Complex :: setReal(double r){
	real = r;
}

void Complex :: setImag(double m){
	imag = m;
}

Complex ::Complex(double r,double i){
	setReal(r);
	setImag(i); 
}

Complex :: ~Complex(){
}

double Complex :: getImag(){
	return imag;
}

double Complex :: getReal(){
	return real;
}

double Complex :: abs(){
	return sqrt(real * real + imag * imag);
}

int main() {
	Complex c1(1,-2.3);
	
	cout << c1.abs()<<endl;
	
	return 0;
}
