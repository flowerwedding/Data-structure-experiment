#include <iostream>
using namespace std;

class Dog{
	public:
	    Dog(double a,double w);
	    void printDog();
	private:
		double age;
		double weight;
};

Dog :: Dog (double a, double w){
	age = a;
	weight = w;
}

void Dog :: printDog(){
	cout << "Dog Age:"<< age << " years\nDog Weight:" << weight << "kg" << endl;
}

int main() {
   cout << "Input Age and Weight:";
	
	double a, w;
	cin >> a >> w;
	
	Dog dogger(a , w);
	dogger.printDog();
	
	return 0;
}
