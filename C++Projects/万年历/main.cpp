#include <iostream>
using namespace std;

int main() {
	int years , weekday , day , days = 0 , month , i = 1 , j;
	
	cout << "��� һ��һ�����ڼ� "; //�������years����1��1�����ڼ�weekday 
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
	    
	    cout << years << "��" << month << "��" << endl; 
	    cout << "һ\t��\t��\t��\t��\t��\t��" << endl;
	    
	    for(j = 1;j <= (i + weekday - 2) % 7;j++) {//��Ϊ\t�ǹ�굽�Ǹ�λ�ã�����Ҫ-1��-2����ΪҪ��ԭ���������Ū���� 
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
