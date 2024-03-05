#include "miskat.h"
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main(void){
    #ifdef N 
    printf("SO beautiful so elegant just looking like a wow\n");
    #else
    printf("Apne awkad dikha di!\n");
    #endif
    result("I'm in love with IOS.\n");
    int x = get_int("x = ");
    int y = get_int("y = ");
    swap(&x,&y);
    bar(20,'*');
    result("x = ");printf("%i\n",x);
    result("y = ");printf("%i\n",y);
}