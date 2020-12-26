#include<iostream>
using namespace std;
 
int search(int key[],int n,int k){
 	int low=0,high=n-1,mid;
 	while(low<=high)
 	{
  		mid=(low+high)/2;
  		if(key[mid]==k)
   			return mid;	//查找成功，返回mid 
  		if(k>key[mid])
   			low=mid+1;	//在后半序列中查找 
  		else
   			high=mid-1;	//在前半序列中查找 
 	}
 	return -1;//查找失败，返回-1 
}

int main(){
	int key[12] = {0,5,7,9,12,15,18,20,22,25,30,100};
	int k, n = 12;
	while(cin >> k&&k){
		cout << search(key,n,k);
	}
	return 0;
}
