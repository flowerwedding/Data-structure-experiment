#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int x , ans;
	 
	cout << "input the value of x:";
    cin >> x;
	 
	ans = abs(x);
	//if(x < 0){ ans = - x;}
	
	cout<<"|x|="<<ans;
	
	return 0;
}
