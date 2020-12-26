#include <iostream>
using namespace std; 
void sort(int *a,int n);

int main() {
	int a[100],n,i;
	
	cout << "Input n:";
	cin >> n;
	for(i = 0;i < n;i ++){
		cin >> *(a + i);
	} 
	
	sort( a, n);
	
	for(i = 0;i < n;i ++){
		cout << *(a + i);
	} 
	
	return 0;
}

void sort(int *a,int n){
	int i, j, k, t;
	for(i = 0;i < n;i++){
		k = i;
		for(j = i;j < n;j++){
			if(*(a + k) > *(a + j)){
				t = k;
				k = j;
				j = t; 
			}
		}
		if( k != i){
			t = *(a + k);
			*(a + k) = *(a + i);
			*(a + i) = t;
		}
	}
}
