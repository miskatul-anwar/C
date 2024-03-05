#include "miskat.h"
int main(void){
    int x = get_int("X = ");
    int y = get_int("Y = ");
    if(x>y){
        printf("Your number is greater than mine.\n");
    }else if(y>x){
        printf("Your number is less than mine.\n");
    }else{
        printf("Equal.\n");
    }
    return 0;
}