#include <iostream>
#include <stack>
#include <algorithm>
using namespace std; 

int main() {
	long long n,k,m,a[64],i = 0,j,t;
	
	cin >> n >> k;
	t = n; 
	if(k > n){
		cout << "NO" << endl;
		return 0;
	}
	
/*	m = n;
	while(m > 0){
		if((m & (m-1))==0){
			break;
		}else{
			m --;
		}
	} */
	a[0] = 1;
	for(int i=1;i<40;i++){
        a[i]=a[i-1]*2;
    }
	
	stack<long long>st;
	int sum=0;
    for(int i=32;i>=0;i--){
        while(a[i]<=n && k-1<=n-a[i] && n > 0 && k > 0){
            st.push(a[i]);
            sum+=a[i];
            k--;
            n-=a[i];
        }
    }
    
    if(sum != t){
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    while(!st.empty()){
        cout <<st.top() << " ";
        st.pop();
    }

/*	do{
		if(n - m >= 0){
		   n -= m;
		   a[i++] = m;	
		}else{
			m/= 2;
		}
	}while (n > 0 && m != 0);
	
	if(n != 0 || i > k){
		cout << "NO" << endl;
		return 0;
	}
	
	for(;i < k;i++){
		
         /= 2;
        a[i] = *b;
	} 
	
	sort(a, a + i);
	cout << "YES" <<endl;
	for(i = 0;i < k;i++){
		cout << a[i]<< " ";
	}*/
	
	return 0;
}
