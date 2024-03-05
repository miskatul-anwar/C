#include<stdio.h>
int main()
{
    int k = 8,n=8,i,j;
    int c[10], b[10];
    int a[8]={2,4,1,6,3,8,5,7};
    //a[]-- Initial Array to Sort
    for (i=0; i<k; i++)
    {
       c[i] = 0;
    }
    //storing count of each element
    for(j=0; j<n; j++)
    {
        c[a[j]] = c[a[j]] +1;
    }
    /*change c[i] such that it contains 
    actual position of these elements in output array */
    for(i=1; i<k; i++)
    {
        c[i] = c[i] + c[i-1];
    }
    //Build Output array from c[i]
    for(j=n-1; j>=0; j--)
    {
        b[c[a[j]]-1] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
    for(int m=0; m<k; m++)
    {
        printf("%d ", b[m]);
        //print array b
    }
    printf("\n");
}