#include <iostream>
#include <cstring>
int dfs(char c);
using namespace std;

int alp[27][27];
int flag[27];

int main(){
	char c[101];
	int num;
	
	while(cin >> c){
		memset(flag,0,sizeof(flag));
		memset(alp,0,sizeof(alp));
		
		alp[c[0] - 97][c[strlen(c)-1] - 97] = 1;
		while(cin >> c && c[0] != '0'){
			alp[c[0] - 97][c[strlen(c)-1] - 97] = 1;
		}
		
		if(dfs('b')){
			cout << "Yes." <<endl;
		}else{
			cout << "No." << endl;
		}
	}
	
	return 0;
}

int dfs(char c){
	if(c == 'm'){
		return 1;
	}
	
	int i;
	for(i = 0;i < 26;i ++){
		if(alp[c - 97][i] == 1 && flag[i] == 0){
			flag[i] = 1;
			if (dfs(i + 97)) return 1;
			flag[i] = 0;
		}
	}
	
	return 0;
}
