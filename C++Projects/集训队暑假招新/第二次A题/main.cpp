#include <iostream> 
#include<algorithm>
using namespace std;

int main() {
 	int N,Q,i,t,j = 1;
 	
 	while(cin >> N >> Q && N != 0){
 		int a[10005] = {0};
 		cout << "CASE# "<< j++ <<":" << endl;
 		for(i = 0;i < N;i ++){
 			cin >> t;
 //			if (a[t] == 0){
//			     a[t] = i + 1;	
//			 } 
//		 }

           a[i] = t;
        }
        sort(a,a + N); 
		
		 while(Q--){
		 	cin >> t;
//		 	if(a[t] == 0){
            int p=lower_bound(a,a + N,t)-a;
            if( a[p] != t){
		 		cout << t <<" not found" << endl;
			 }else{
			 	cout << t <<" found at " << p + 1<< endl; 
			 }
		 }
		 
	 }
 	
	return 0;
}
/* 
const int maxn=10000;
int main(){
	int n,q,x;
	int a[maxn];
	int kase=0;
	while(scanf("%d%d",&n,&q)==2 and n){
		printf("CASE# %d:\n",++kase);
		for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		sort(a,a+n);
		while(q--){
			scanf("%d",&x);
			int p=lower_bound(a,a+n,x)-a;//查找大于或者等于x的第一个位置 

			if(a[p]==x)
			printf("%d found at %d\n",x,p+1);
			else
			printf("%d not found\n",x);
		}
	}
	return 0;
}*/
