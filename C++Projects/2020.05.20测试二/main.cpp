#include <iostream>
using namespace std; 

int main() {
	int i, a[30], j,t,num = 0,k;
	for(i = 0;i < 10;i++){
		cin >> a[i];
		if(a[i] % 2 == 1){
			num ++;
		} 
	}
	for(i = 0;i < num;i++){
		k = i;
		while(a[k] % 2 == 0){
			k++;
		}
		for(j = i + 1;j < 10;j++){
			if(a[j] % 2 == 1 && a[j] < a[k]){
			    k = j;
			}
		}
		if(k != i){
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for(i = num;i < 10;i++){
		k = i;
		for(j = i + 1;j < 10;j++){
			if(a[j] % 2 == 0 && a[j] < a[k]){
			    k = j;
			}
		}
		if(k != i){
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for(i = 0;i < 9;i++){
		cout << a[i] << " ";
	}
	cout << a[9];
	return 0;
}
