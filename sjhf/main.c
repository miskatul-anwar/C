#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i ; i<=n ;i++)
    {
    printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
