#include<stdio.h>
#include<stdlib.h>
int main(void){
    char *x = malloc(1*sizeof(char*));
    printf("name = ");
    scanf("%s", x);
    //now print it out
    printf("name = %s", x);
}