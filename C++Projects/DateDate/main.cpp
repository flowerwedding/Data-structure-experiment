#include <iostream>
using namespace std;

class  Date{ 
public: 
    Date() { 
        cout<<"Input  Date:"; 
        cin>>y>>m>>d; 
    } 
    int  beLeapYear(){ 
        cout <<((y%4==0&&y%100!=0)||(y%400==0))<<endl;
        return  ((y%4==0&&y%100!=0)||(y%400==0)); 
    } 
    void  addOneDay() {
    	if( ((d == 31) && (m == 1 || m == 3 || m == 5 ||m == 7|| m == 8 || m ==10)) || ((d == 30) && (m == 4 || m == 6 || m == 9 || m == 11)) ){
    		m ++;
    		d = 1;
		}else if((d == 31) && (m == 12)){
			y ++;
			d = 1;
			m = 1;
		}else if((m == 2) && ((beLeapYear() == 1 && d == 29)||(beLeapYear() == 0 && d == 28))){
			m ++;
			d = 1;
		}else{
			d ++;
		}
    } 
    void  showDate(){ 
        cout<<y<<"-"<<m<<"-"<<d<<endl; 
	}
private: 
    int  y,m,d; 
};
 
int  main() 
{ 
      Date  d; 
      d.showDate(); 
      d.addOneDay(); 
      d.showDate(); 
} 
