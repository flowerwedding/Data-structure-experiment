#include <iostream>
#include<iomanip>
using namespace std;

class Complex{
	public:
		Complex(float r1,float i1,float r2,float i2);
		void operation();
	private:
		struct Geti{
			float real;
			float imaginary;
		}a,b;
};

Complex :: Complex(float r1,float i1,float r2,float i2){
    a.real = r1;
    a.imaginary = i1;
    b.real = r2;
    b.imaginary = i2;
}

void Complex :: operation(){
	cout<<fixed<<setprecision(1);
	cout << "ComplexNumber a: "<< a.real <<" + "<< a.imaginary<<"i" <<endl 
	     << "ComplexNumber b: "<< b.real <<" + "<< b.imaginary<<"i" <<endl
	     <<"(a + b) = "<< a.real + b.real <<" + "<< a.imaginary + b.imaginary <<"i"<<endl
	     <<"(a - b) = "<< a.real - b.real <<" + "<< a.imaginary - b.imaginary <<"i"<<endl
         <<"(a * b) = "<< a.real * b.real - a.imaginary * b.imaginary <<" + "<< a.imaginary * b.real + a.real * b.imaginary <<"i";
}

int main() {
	float r1, r2, i1, i2;
	
	cout << "input c1:"<<endl;
	cin >> r1 >> i1;
	cout << "input c2:"<<endl;
	cin >> r2 >> i2;
	
	
    Complex m(r1,i1,r2,i2);
    m.operation();
    
	return 0;
}
