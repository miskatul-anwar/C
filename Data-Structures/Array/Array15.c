#include<stdio.h>
int main()
{
    int data[10]={1,2,3,4,5}, item=2, loc, n =5;
    printf("size of array: %d\n", sizeof(data)/sizeof(data[0]));
    data[n+1]=item;
    loc =1;
    while(data[loc] != item)
    {
        loc = loc +1;
    }
    if(loc ==n+1)
    {
        loc = 0;
        printf("Unavailable.\n");
    }
    else
    {
        printf("Item found at %d\n", loc+1 );
    }
    return 0;
}