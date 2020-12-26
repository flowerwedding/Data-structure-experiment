#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Triangle{
	public:
		Triangle(double a,double b,double c);//������ܹ��������Ρ���
		void setSide(double x,double y,double z);//��abc��ֵxyz 
		double getPerimeter();//�����������ܳ� 
		double getArea();//������������� 
	private:
		double a,b,c;
};

Triangle :: Triangle(double x,double y,double z){
	if(x + y <= z || x + z <= y || z + y <= x){
		a = 0;
		b = 0;
		c = 0;
	}else{
		a = x;
		b = y;
		c = z;
	}
}

void Triangle :: setSide(double x,double y,double z){
	double perimeter,area;
	perimeter = getPerimeter();
	area = getArea();
	cout<<fixed<<setprecision(1);
	cout <<"perimeter="<< perimeter << endl
	     <<"area=" << area << endl
         <<"a="<< a <<",b="<< b <<",c="<<c; 
}

double Triangle :: getPerimeter(){
	double perimeter;
	perimeter = a + b + c;
	return perimeter;
}

double Triangle :: getArea(){
	double p,area;
	p = (double)(a + b + c)/2;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	return area;
}

int main() {
    double x, y, z;
	
	cin >> x >> y >> z;
	
	Triangle t(x,y,z);
	t.setSide(x,y,z);
		
	return 0;
}
