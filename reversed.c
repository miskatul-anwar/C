#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    for(int i=n; i>=1; i--)
    {
        if( i % 2 != 0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
