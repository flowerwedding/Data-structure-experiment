#include<iostream>
using namespace std;
 
int search(int key[],int n,int k){
 	int low=0,high=n-1,mid;
 	while(low<=high)
 	{
  		mid=(low+high)/2;
  		if(key[mid]==k)
   			return mid;	//���ҳɹ�������mid 
  		if(k>key[mid])
   			low=mid+1;	//�ں�������в��� 
  		else
   			high=mid-1;	//��ǰ�������в��� 
 	}
 	return -1;//����ʧ�ܣ�����-1 
}

int main(){
	int key[12] = {0,5,7,9,12,15,18,20,22,25,30,100};
	int k, n = 12;
	while(cin >> k&&k){
		cout << search(key,n,k);
	}
	return 0;
}
