#include <stdio.h>

int main() {
    int a, b, x;
    printf("Enter two numbers to calculate LCM:");
    printf("\n");
    for(int i=1; i<=35; i++ )
    {
        printf("*", i);
    }
    printf("\n");
    //were gonna be using integers for this process
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    //I'm trying to find the maximum of the two numbers
    if(a>b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
   for( ; ; x++)
   {
        if (x % a == 0 && x % b == 0) {
            printf("LCM of %d and %d is %d\n", a, b, x);
            break;
        }
   }
    for(int i=1; i<=35; i++ )
    {
        printf("*", i);
    }
    printf("\n");

    return 0;
}
