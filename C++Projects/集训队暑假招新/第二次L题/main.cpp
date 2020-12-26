#include<iostream>
#include<cstring>
#include<stack>
#define INF 0x3f3f3f3f//定义成无穷大 
using namespace std;

struct step{
    int x,y;
};

int a[5][5],ans=INF,k;
step b[100];
int xx[4]={1,-1,0,0}, yy[4]={0,0,1,-1};
stack<step>s;//存储路径

void mycopy(stack<step> a){//路径反转
    for(k=0; !a.empty(); k++){
        b[k]=a.top();
        a.pop();
    }
}

void dfs(int x,int y,int sum){
    step st;
    st.x=x,st.y=y;
    s.push(st);
    
    if(x == 4 && y == 4){
        if(sum < ans){//找寻最短路径
            ans = sum;
            mycopy(s);
        }
    }
    
    int x2,y2;
    for(int i=0; i<4; i++){
        x2 = st.x + xx[i];
	    y2 = st.y + yy[i];
        if(x2>=0&&x2<5 && y2>=0&&y2<5 && !a[x2][y2]){
            a[x2][y2]=1;
            dfs(x2,y2,sum+1);
            a[x2][y2]=0;
        }
    }
    s.pop();
}

int main(){
    int i,j;
    for(i = 0;i < 5;i ++)
        for(j = 0;j < 5;j ++)
            cin >> a[i][j];
    dfs(0,0,0);
    cout << "(0, 0)" << endl;
    for(i = ans - 1;i >= 0;i --)
        cout << "(" << b[i].x << ", " << b[i].y << ")" << endl;
    return 0;
}
