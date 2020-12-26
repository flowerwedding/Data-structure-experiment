#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main() {
    char str, c;
    double a , b;
    stack< double > num;
    
    while(cin >>a){
    	double ans = 0;
        while(!num.empty())
			num.pop();
    	c = getchar();
		if(c == '\n' && a == 0)break;
		
		cin >> c ;
		num.push(a);
		while(cin >> b){
			switch(c){
				case '*': a = num.top(); num.pop(); num.push(a * b); break; 
				case '/': a = num.top(); num.pop(); num.push(a / b); break;
				case '+': num.push (b); break;
				case '-': num.push(-b); break;
			}
			c = getchar();
			if (c == '\n') break;
			cin >> c;
			getchar();
		}
		
		while(!num.empty()){
			ans += num.top();
			num.pop();
		}
		
		printf("%.2lf\n", ans);
	}
	 
	return 0;
}
