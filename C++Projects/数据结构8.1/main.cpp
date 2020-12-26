#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#define n 3

struct student{ 
    char name[8];
    int score;
} R[n];

int main(){ 
    int num, i, j, max, temp;
    printf("\n请输入学生成绩: \n");
    for (i=0; i<n; i++){
	    printf ("姓名:");
        scanf ("%s", R[i].name);
        printf ("成绩:");
        scanf ("%d", &(R[i].score));
    }
    num=1;
    for (i=0; i<n; i++){ 
	    max=i;
        for (j=i+1; j<n; j++)
        if (R[j].score>R[max].score)
        max=j;
        if (max!=i){ 
		    temp = R[max].score;
            R[max]=R[i];
            R[i].score= temp;
        }
        if ((i>0)&&(R[i].score<R[i-1].score))
            num=num+1;
        printf("%4d%s%4d\n", num, R[i].name, R[i].score);
    }
    getch();
}
