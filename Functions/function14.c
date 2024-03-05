#include<stdio.h>
int main()
{
    printH(5);
    return 0;
}
//recursive function
void printH(int a)
{
    if(a == 0) 
    {
        return;
    }
    printf("Hello world!\n");
    printH(a-1);
}