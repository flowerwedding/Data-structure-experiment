#include <iostream>
#include <map>
#include <cstdio>
#include <iomanip>
#include<functional>
using namespace std;

int main() {
	map<double,int,greater<double> >mp1,mp2;//°´key½µÐòÅÅÐò 
	int  n, i;
	double m,f, j, ans;
	
	while (cin >> m >> n && (m != -1 && n != -1)){
		for(i = 0;i < n;i ++){
			cin >> f >> j;
			mp1[f / j] = j;
			mp2[f / j] = f;
		}
		
		ans = 0; 
		map<double,int >::iterator iter, iter2;
        for (iter = mp1.begin();iter != mp1.end(); iter++){
           iter2 = mp2.find(iter -> first);
           if(m > iter -> second + 0.001){
           	    m -= iter -> second;
           	    ans += iter2 -> second;
		   }else{
		   	    ans += m  * iter2 -> second / iter -> second;
		   	    break;
		   }
        }
        
       printf("%.3lf\n",ans);
      
        mp1.clear();
        mp2.clear();
	}
	
	return 0;
}
