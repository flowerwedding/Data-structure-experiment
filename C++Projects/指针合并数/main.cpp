#include <iostream>

using namespace std;

void fun(int a,int b,long *c)

{

    //ÇëÔÚ´Ë²¹³ä´úÂë¡£

    /**************************************/
    
    *c = a % 100 / 10 * 1000 + b % 10 * 100 + a % 10 * 10 + b / 10; 
    
    /**************************************/

}

int main()

{

    int a,b;

    long c;

    cout<<"Input a,b:";

    cin>>a>>b;

    fun(a,b,&c);

    cout<<"c="<<c<<endl;

    return 0;

}
