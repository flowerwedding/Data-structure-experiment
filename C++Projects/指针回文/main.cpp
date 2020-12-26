#include <iostream>

#include <cstring>

using namespace std;

int check(char *s)

{

    char *p1,*p2;

    int n;

    //ÇëÔÚ´Ë²¹³ä´úÂë¡£

    /**************************************/
    n = strlen(s);
    p1 = s;
	p2 = (s + n - 1); 
    while((p1 < p2) && (*p1 == *p2)){
    	p1++;
    	p2--;
    }
	
	if(p1 == p2 || p1 == p2 + 1){
		return 1;
	}else{
		return 0;
	}

    /**************************************/

}

int main()

{

    char str[100],*p;

    cout<<"Input a string:"<<endl;

    cin>>str;

    p=str;

    cout<<"Result:"<<check(p)<<endl;

}
