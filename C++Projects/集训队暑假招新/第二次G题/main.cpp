#include <iostream>
#include <cstring>
void dfs(int x,int y);
using namespace std;

int xx[8]={1,1,0,-1,-1,-1,0,1}, yy[8]={0,1,1,1,0,-1,-1,-1};
int n, m,b[105][105];
char a[105][105];

int main() {
	int i, j;
	while(cin >> n >> m && n != 0 && m != 0){
		int sum = 0;
		getchar();
	//	memset(b,0,sizeof(b));
		
		for(i = 0;i < n;i ++){
			for(j = 0;j < m;j ++){
				cin >> a[i][j];
			}
			getchar();
		}
		
		for(i = 0;i < n;i ++){
			for(j = 0;j < m;j++){
				if(a[i][j] == '@'){
			    	dfs(i,j);
				    sum ++;
			    }
			}
		}
		
		cout << sum << endl;
	}

	return 0;
}

void dfs(int x,int y){
	int i, x2, y2;
	
	if(a[x][y]=='@')//将搜过的口袋标记
        a[x][y]='*';
	
	for(i = 0;i < 8;i ++){
	    x2 = x + xx[i];
	    y2 = y + yy[i];
	    
	    if(x2>=0&&x2<n && y2>=0&&y2<m && a[x2][y2]=='@'){
	    //	b[x][y] = 1;
			dfs(x2,y2);//递归
		}

	}
}
