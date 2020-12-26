#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
#define N 10

int seqSearch(int array[],int k){
    int i=N;
    array[0]=k;
    while(array[i]!=k) i--;
    return i;
}

int main(){
    int array[N+1]={0,9,13,15,7,45,32,56,89,60,36};
    int a;
    scanf("%d",&a);
    int p=seqSearch(array,a);
    if(p!=0) printf("index=%d\n",p);
    else printf("index=-1\n");
    return 0; 
}
