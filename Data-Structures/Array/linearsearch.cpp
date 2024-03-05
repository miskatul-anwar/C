#include<stdio.h>
int main()
{
    int a[5] = {0, 1, 2, 1, 4};
    int b;
    printf("Enter which number you want to search:\n");
    scanf("%d", &b);
    int poss = 0;
    for(int i=0; i<5; i++)
    {
       if(a[i] == b)
       {
         printf("Argument %d found on a[%d]\n", b, i);
         poss = 1;
       }
    }
    if(!poss)
    {
        printf("Argument %d not found\n", b);
    }
    printf("\n");
    return 0;
}