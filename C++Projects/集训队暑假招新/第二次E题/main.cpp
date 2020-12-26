#include <iostream>
void dfs(int x,int y,int sum);
using namespace std;

int maxn = 0;
int x1[4]={1,-1,0,0}, y1[4]={0,0,1,-1};
int n, m, b[20][20] = {1},c[26] = {0};//b[][]是判断这个空格有没有走过，c[]是判断这个字母有没有走过 
char a[20][20];//存储最原始的矩阵 

int main() {
	int i,j;
	
	cin >> n >> m;
	for(i = 0;i < n;i ++)
	    for(j = 0;j < m;j ++)
	        cin >> a[i][j];
	        
	c[a[0][0] - 'A'] = 1; 
	dfs(0,0,1);
	
	cout << maxn << endl; 
	
	return 0;
}

void dfs(int x,int y,int sum){
	maxn = max(sum, maxn);
	
	int i, x2, y2;
	for(i = 0;i < 4;i ++){
	    x2 = x + x1[i];
	    y2 = y + y1[i];
	    
	    if(x2>=0&&x2<n && y2>=0&&y2<m && b[x2][y2]==0&&c[a[x2][y2]-'A']==0){//在矩阵内部，且空格和字母都没走过 
			b[x2][y2]=1;
			c[a[x2][y2]-'A']=1;
			dfs(x2,y2,sum+1);//递归
			b[x2][y2]=0;//递归出来后这个数组还要用 
			c[a[x2][y2]-'A']=0;
		}

	}
}
