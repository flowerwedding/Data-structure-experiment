#include <iostream>
using namespace std;
 
int main() {
    int a,b,j = 0,i;
	long long n[100] = {0,1,1},d[100],num;
	while(cin >> a >> b >> num){
		if( a == 0 && b == 0 && num == 0){
			break;
		}
	
	    for(i = 3;i< 49;i++){
		    n[i] = (a * n[i - 1]+b * n[i - 2])%7;
		    if(n[i] == 1 && n[i - 1] == 1){
		    	break;
			}
	    }
	    
        //if(num % (i - 2)==0) d[j++] = n[i - 2];
         d[j++] = n[num % i];
	} 
	
	for(i = 0;i < j;i++){
		cout << d[i] <<endl;
	}
	
	return 0;
}
