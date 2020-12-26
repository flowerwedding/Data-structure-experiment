#include <iostream>
#include <cmath>
using namespace std;
 
class Point{
	public:
		Point(int xx, int yy);
		Point();//���캯�����أ��޲������캯��
		~Point();
		
		void setX(int xx);
		void setY(int yy);
		
		int getX();
		int getY();
	private:
	    int x;
		int y; 
};
 
void Point :: setX(int xx){
	x = xx;
}

void Point :: setY(int yy){
	y = yy;
}

Point :: Point(int xx,int yy){
	setX(xx);
	setY(yy);
	cout << "Point(" << x << "," << y << ") is constructing..." << endl;
}

Point :: Point(){
	setX(0);
	setY(0);
	cout << "Point(" << x << "," << y << ") is constructing..." << endl;
}

Point :: ~Point(){
	cout << "Point(" << x << "," << y << ") is destructing..." << endl;
}

int Point :: getX(){
	return x;
}

int Point :: getY(){
	return y;
} 

int main() {
    Point p1;//�����޲ι��캯��Point()����ʼ��p1Ϊ����ԭ��
	Point p2(100,100);//���ù��캯��Point(int xx,int yy)
	
	double xOFF = p1.getX() - p2.getX();
	double yOFF = p1.getY() - p2.getY();
	double distance = sqrt(xOFF * xOFF + yOFF *yOFF);
	
	cout << "\n�����ľ���Ϊ��" << distance << endl << endl; 
	     	
	return 0;
}
