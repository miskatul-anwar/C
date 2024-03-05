//a program to print a triangle    
#include<stdio.h>
void main(void){
    int num,sum=1;
    printf("Enter the number of rows: ");scanf("%d",&num);
    for(int row=1;row<num+1;row++){
        for(int col=1;col<=sum;col++){
            printf("* ");
        }
        sum+=2;
        printf("\n");
    }
}