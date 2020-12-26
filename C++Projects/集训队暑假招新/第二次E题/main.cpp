#include <iostream>
void dfs(int x,int y,int sum);
using namespace std;

int maxn = 0;
int x1[4]={1,-1,0,0}, y1[4]={0,0,1,-1};
int n, m, b[20][20] = {1},c[26] = {0};//b[][]���ж�����ո���û���߹���c[]���ж������ĸ��û���߹� 
char a[20][20];//�洢��ԭʼ�ľ��� 

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
	    
	    if(x2>=0&&x2<n && y2>=0&&y2<m && b[x2][y2]==0&&c[a[x2][y2]-'A']==0){//�ھ����ڲ����ҿո����ĸ��û�߹� 
			b[x2][y2]=1;
			c[a[x2][y2]-'A']=1;
			dfs(x2,y2,sum+1);//�ݹ�
			b[x2][y2]=0;//�ݹ������������黹Ҫ�� 
			c[a[x2][y2]-'A']=0;
		}

	}
}
