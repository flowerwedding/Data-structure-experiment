#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct trad{
	double f;
	double j;
	double k;
}trade[1000];

int compare(trad a,trad b){
	return a.k>b.k;
}

int main() {
	//map<double,int,greater<double> >mp1,mp2;//°´key½µĞòÅÅĞò 
	int m, n, i;
	double f, j, ans;
	
	while (cin >> m >> n && (m != -1 && n != -1)){
		for(i = 0;i < n;i ++){
			cin >> f >> j;
			trade[i].f = f;trade[i].j = j;trade[i].k = f/j;
		}
		
		ans = 0; 
	//	map<double,int >::iterator iter, iter2;
    //    for (iter = mp1.begin();iter != mp1.end(); iter++){
    //      iter2 = mp2.find(iter -> first);
        sort(trade,trade + n,compare);
		for(i = 0;i < n;i ++){
           if(m > trade[i].j + 0.001){
           	    m -= trade[i].j;
           	    ans += trade[i].f;
		   }else{
		   	    ans += (double)m  * trade[i].k;
		   	    break;
		   }
        }
        
        printf("%.3lf\n",ans);
      
      //  mp1.clear();
       // mp2.clear();
	}
	
	return 0;
}
