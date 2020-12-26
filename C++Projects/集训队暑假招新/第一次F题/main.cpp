#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	long long num,i,m[100005] = {0};
	
	cin >> num;
	for(i = 0; i < num;i ++){
		cin >> m[i];
	}
	
	if(num == 2){
		cout << 0 <<endl;
	}else{
		sort(m,m + num);
		if((m[num - 1] - m[1]) < (m[num - 2] - m[0])){
			cout << m[num - 1] - m[1]<< endl;
		}else{
			cout << m[num - 2] - m[0] << endl;
		}
	}
	return 0;
}
