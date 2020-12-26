#include <iostream>
#include <string>  
#include <algorithm> 
using namespace std;
 
int main() {
    char a[10], b[10],c[10];
    int num, ass[18];
	
	while( !(cin >> num >> a >> b).eof() ){
		int i=0, j=0, z=0, top=0;
		while(a[i]){
            c[top] = a[i];
            ass[z] = 1;
            top++;
            z++;
            while(top>0 && b[j]==c[top-1]){
                top--;
                ass[z] = 0;
                z++;
                j++;
            }
            i++;
        }
        if(top == 0){
            cout <<"Yes." << endl;
            for(i = 0; i < 2 * num; i++)
                if(ass[i])
                    cout <<"in" << endl;
                else
                    cout <<"out" << endl;
            cout <<"FINISH" <<endl;
        }else{
            cout << "No." << endl <<"FINISH" << endl;
        }
	}
		 
	
	return 0;
}
