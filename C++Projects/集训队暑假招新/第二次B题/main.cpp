#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
	int n,a,b,t;
	
	while(cin >> n){
		queue <int> q;
        priority_queue <int> pq;
        stack <int> s;
		
        int flagq = 1,flagpq = 1,flags = 1;
		while(n --){
			cin >> a >> b;
			if(a == 1){
				q.push(b);
                pq.push(b);
                s.push(b);
			}else{
				if(!q.empty()){
					if(b != q.front())
				        flagq = 0;
				    q.pop();
    			}else{
    				flagq = 0;
				}
				
				if(!pq.empty()){
					if(b != pq.top())
					    flagpq = 0;
					pq.pop();
				}else{
					flagpq = 0;
				}
				
				if(!s.empty()){
					if(b != s.top())
					    flags = 0;
					s.pop();
				}else{
					flags = 0;
				}
				
			}
		}
		
		int sum = flagq + flagpq + flags;
		if(sum > 1){
			cout << "not sure" << endl;
		}else if(sum == 0){
		    cout << "impossible" << endl;
		}else if(flagq == 1){
			cout << "queue" << endl;
		}else if(flagpq == 1){
			cout << "priority queue" << endl;
		}else{
			cout << "stack" << endl;
    	}
	}
	
	return 0;
}
