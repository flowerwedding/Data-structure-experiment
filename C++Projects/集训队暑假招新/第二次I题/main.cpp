/*#include <iostream>
//#include <queue>
using namespace std;

int main() {
	//queue<int> q;
	int N,t,flag = 1;
	
	cin >> N;
	while(N--){
		cin >> t;
		int a[5005] = {0},count = 0,i = 0,num = 0;
		
		while(count + 3 < t){
			while(a[i] == 1){
				i ++;
				if(i == t){
			    	flag = 2 - (flag + 1) % 2;
				    i = 0;
			    }
			}
			i = flag + i;
			cout << "i = " <<i << endl;
			a[i] = 1;
			count ++;
		}
		
		for(i = 0;i < t;i++){
			if(a[i] == 0){
				cout << i + 1 << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N,a[5555],i,num,j,flag,least,x;
    cin >> N;
    while(N--){
		cin>>num;
		for(i = 0;i < num;i++)
			a[i] = i + 1;
		
		if(num <= 3){
            cout << "1";
		    for(i = 1;i < num;i++)
				cout<<" "<<a[i];
			puts("");
			continue;
	    }
	    
	    x = 2;
	    least = num;
		while(1){
		    flag = 0;
		    for(i=0;i<num;i++){
			    if(a[i]!=-1){
				    flag ++;
				    if(flag == x){
				        a[i] = -1;
					    flag = 0;
					    least --;
				    }
			    }
			  //  if(least <= 3)break;
	        }
		    if(least <= 3)break;
		    x = 2 + (x + 1) % 2;
    	}
	    for(i=0;i<num;i++)
		    if(a[i]!=-1){
			    cout<<a[i];
		    	break;
	    	}
	    i++;
    	for(;i < num;i ++)
	    	if(a[i]!=-1)cout<<" "<<a[i];
    	puts("");
    }
	return 0;
}
