#include<stdio.h>
int main()
{
int n=3,row,col;
for(row=n;row>=1;row--)
{
for(col=1;col=n-row;col++)
{
printf(" ",col);
}
for(col=1;col<=n;col++)
{
printf("%d",col);
}
printf ("\n");
}
return 0;
}
