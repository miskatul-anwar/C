#include "miskat.h"
void main(void){
    bar(20,'*');
    entry(sys_var);
    printf("\n");
    int x = get_int("x = ");
    int y = get_int("y = ");
    int z = sum(x,y);
    int max = max(x,y);
    bar(20,'*');
    result("x + y = "); printf("%i\n",z);
    result("max = "); printf("%i\n",max);
    // this is a program dependent on my headerfile
}
