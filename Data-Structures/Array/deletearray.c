#include<stdio.h>
int main()
{
    int ar[100],n, pos,val, i;
    printf("Enter how many varriables you want:");
    scanf("%d", &n);
    printf("Now, Enter the values accordingly.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
     for (i = 0; i < n; i++)
    {
        printf("argument[%d] = %d\n",i, ar[i]);
    }
    printf("Which position you prefer to delete?\n");
    scanf("%d", &pos);
    for(i=pos-1; i<n -1; i++)
    {
        ar[i] = ar[i+1];
    }
    ar[n-1]=0;
    for(i=0; i<=n-1; i++)
    {
        printf("ar[%d] = %d\n",i, ar[i]);
    }
    printf("\nThank You..!\n");
    return 0;
     

}