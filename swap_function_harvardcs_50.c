#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b);
int main(void){
    int x=9;int y=10;
    printf("x = %i\ny = %i\n",x,y);
    for(int i=0;i<20;i++){
        printf("*");
    }
    printf("\n");
    swap(&x, &y);
    printf("x = %i\ny = %i\n",x,y);
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}