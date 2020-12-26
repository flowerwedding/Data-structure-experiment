#include <iostream>
using namespace std;

int main() {
	int t;
	long long n, sum, i, m, max;
	
	cin >> t;
	
	while(t --){
		cin >> n;
		max = 0;
		sum = 0;
		
		for(i = 0;i < n;i ++){
			cin >> m;
			sum += m;
			if(m > max){
				max = m;
			}
		}
		
		if(max * 2 - sum > 1){
		    cout << "No" << endl;
    	}else{
		    cout << "Yes" << endl;	
		}
	}
	
	return 0;
}
