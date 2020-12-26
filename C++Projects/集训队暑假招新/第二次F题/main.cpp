#include <iostream>
#include <cmath>
#include <cstring>
void dfs(int num,int sum);
using namespace std;

int a[11],b[11],ans;
 
int main() {
	int t, i, j, n;
	cin >> t;
	
	for(i = 0;i < t;i++){
		for(j = 1;j <= 10;j ++){
			cin >> n;
			a[n] = j; 
		}
		
		memset(b,0,sizeof(b));
		ans = 10000;
		dfs(0,0);
		cout << ans << endl;
	}
	
	return 0;
}

void dfs(int num,int sum){
	int i, j;
	if (sum > ans){//¼ôÖ¦ 
		return; 
	}
	if( num == 9 ){//µÝ¹é³ö¿Ú 
		ans  = sum;
		return ;
	}
	for(i = 1;i < 10;i ++){
		 if (!b[i]) {
		 	b[i] = 1;
            for (j = i + 1; j <= 10; j++) {
                if (!b[j]) {

                    dfs(num + 1, sum + abs(a[j] - a[i]));
                    break;
                }
            }
            b[i] = 0;
        }
        
	}
}
