#include <iostream>

using namespace std;

int main(){
	int length,width,perim,area;
	
	cout << "Input length and width:";
	cin >> length >> width;
	
	perim = 2*(length+width);
	area = length*width;
	
	cout << "Perim and area:"<< perim <<" "<< area <<endl;
    return 0;	
} 
