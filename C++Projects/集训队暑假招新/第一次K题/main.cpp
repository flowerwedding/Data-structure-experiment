#include <iostream>
#include <ctype.h>
#include <map>
#include <string>
using namespace std; 

int main() {
	map<string,int>mp;
	int i,n,max;
	string c,ans;
	
	while(cin >> n && n){
		for(i = 0; i < n;i ++){
			cin >> c;
			mp[c]++;//好像不用给c所在的map元素初始化 
		}
		
		max = 0;
	    map<string,int>::iterator iter;
        for (iter = mp.begin();iter != mp.end(); iter++){//iter->first是key, iter->second是value 
           if(iter -> second > max){
           	    max = iter -> second;
           	    ans = iter -> first;
		   }
        }
        
        cout << ans<< endl; 
        mp.clear();
	}
	
	return 0;
}
