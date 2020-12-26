#include <stdio.h>

int main(){
    int n;
    double i,sum=0,flag=0;
    
    scanf("%d",&n);
    
    for(i = 1;i <= n;i++){
        if(i % 2!= 0){
            flag=flag+(2*i-1);
        }else{
            flag=flag-(2*i-1);
        }
        sum += 1/flag;
    }
    
    printf("%.3f",sum);
        
    return 0;
}
