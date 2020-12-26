#include <iostream>
using namespace std;

int main() {
	int n , b, ans, a = 1, flag = 0;
	
	cin >> n;
	
	 for(a = 1;a < 9;a++){//三位数最大999，a < 3, 31时a > b 
		for(b = a + 1;b <= 9;b++){
			ans = (a * 10 + b) * (b *10 + a);
			if(ans == n){
				flag = 1;
				break;
			}
	    }
	    if(flag == 1){
	    	break;
		}
	}
	
	if(flag == 1){
		cout << a * 10 + b;
	}else{
		cout << "No Answer";
	}
	
	return 0;
}
