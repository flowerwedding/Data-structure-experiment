#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n,a,b,p,q,flag = 0;
    
    cin >>n >> a >> p >> b >> q ;
    
    if(p < a){
    	p = p + n;
	}
	if(b < q){
		b = b + n;
	}
    while(a < p && b > q){
    	a ++;
    	b --;
    	if(a % n == b % n){
    		flag = 1;
		}
	}
	
	if(flag == 1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}
