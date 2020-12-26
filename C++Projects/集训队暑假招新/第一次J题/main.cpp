#include <iostream>
using namespace std;
 
int main() {
	int cas, n, i, j = 0, max, light, right, s;
	cin >> cas;
	
	while(cas --){
		int dp[100010] = {0};
		cin >> n;
			
		for(i = 0;i < n;i ++){
			cin >> dp[i];
		}
		
		max = dp[0];
		light = 0;
		right = 0;
		s = 0;
		for(i = 1;i < n;i ++){
			if(dp[i-1] > 0){
				dp[i] += dp[i - 1]; 
            }else{
            	s = i;
			}
			
            if(dp[i]>max){
                light = s;
                right = i;
                max = dp[i];
            }
		}
		
		cout << "Case " << ++j << ":" << endl;
		cout << max <<" " << ++light << " " << ++right << endl;
		if(cas){
			cout << endl;
		}
	}
	
	return 0;
}
