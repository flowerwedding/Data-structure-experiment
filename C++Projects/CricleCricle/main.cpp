#include <iostream>
#include<iomanip>
#define PI 3.1415927;
using namespace std;

class Circle{
	public:
		Circle(double r);
	private:
		double radius;
		double getPerimeter();//����Բ���ܳ�
		double getArea();//����Բ�����
		void disp();//���Բ�İ뾶���ܳ������ 
};

Circle :: Circle(double r){
	radius = r;
	disp();
}

double Circle :: getPerimeter(){
	double perimeter;
	
	perimeter = radius * 2 * PI;
	
	return perimeter;
}

double Circle :: getArea(){
	double area;
	
	area = radius * radius * PI;
	
	return area;
}

void Circle :: disp(){
	double perimeter,area;
	
	perimeter = getPerimeter();
	area = getArea();
	
	cout<<fixed<<setprecision(4);
	cout <<"radius="<< radius << endl
	     <<"perimeter="<< perimeter << endl
	     <<"area="<< area;
}

int main() {
	int r;
	
	cin >> r;
	
	Circle c(r);
	
	return 0;
}
