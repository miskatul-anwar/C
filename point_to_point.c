#include<stdio.h>
#include<stdlib.h>
int main(void){
    int *x;
    int *y;
    x = malloc(1 * sizeof(int));
    *(x+1) = 27;
    y = x;
    printf("%p\n",x);
    printf("%p\n", y);
}