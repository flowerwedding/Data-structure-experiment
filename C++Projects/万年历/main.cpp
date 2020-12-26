#include <iostream>
using namespace std;

int main() {
	int years , weekday , day , days = 0 , month , i = 1 , j;
	
	cout << "年份 一月一日星期几 "; //输入年份years，和1月1日星期几weekday 
	cin >> years >> weekday ;

	for (month = 1;month <= 12 ; month++){
		switch(month){
	        case 4:
		    case 6: 
			case 9: 
			case 11: day = 30; break;
			case 2:  (years % 4 == 0)&&(years % 100 != 0)||(years % 400 == 0) ? day = 29 : day = 28; break;
		    default: day = 31; break;
	    }
	    days += day;
	    
	    cout << years << "年" << month << "月" << endl; 
	    cout << "一\t二\t三\t四\t五\t六\t七" << endl;
	    
	    for(j = 1;j <= (i + weekday - 2) % 7;j++) {//因为\t是光标到那个位置，所以要-1；-2是因为要把原来退六格的弄上来 
	    	cout << "\t";
		}
	    
	    for( ;i <= days ;i++){
	    	cout << i - days + day  << "\t";
	    	if((i + weekday -1) % 7 == 0){
	    		cout << endl;
			}
		}
		
		cout << endl << endl;
	}
	
	return 0;
}
