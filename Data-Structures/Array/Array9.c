#include<stdio.h>
int main()
{
    int ar1[10], ar2[10], ar3[10];
    float ar4[10], ar5[10], ar6[10];
    int i, size;
    float sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum6 = 0;
    printf("Enter how many rows you would prefer to enter:");
    scanf("%d", &size);
    printf("Now, Enter the values of 1st column accordingly:\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &ar1[i]);
    }
    for(i=0; i<size; i++)
    {
        sum1 = sum1 +ar1[i];
    }
    printf("sum of 1st column is:%f\n", sum1);
    printf("Now, Enter the values of 2nd column accordingly:\n");
    for(i=0 ; i<size; i++)
    {
        scanf("%d",&ar2[i]);
    }
    for(i=0; i<size; i++)
    {
        sum2 = sum2 +ar2[i];
    }
    printf("sum of 2nd column is:%f\n", sum2);
    for(i=0; i<size; i++)
    {
        ar3[i] = ar1[i] - ar2[i];
        sum3 = sum3 + ar3[i];
    }
    printf("sum of 3rd column is:%f\n", sum3);
    for(i=0; i<size; i++)
    {
        ar4[i] = (sum3/size);
    }
    for(i=0; i < size; i++)
    {
        sum4 = sum4 + ar4[i];
    }
    printf("sum of 4th column is:%f\n", sum4);
    for(i=0; i<size; i++)
    {
        ar5[i] = ar3[i] - ar4[i];
    }
    float s;
    for(i=0; i<size; i++)
    {
        s = ar5[i];
        ar6[i] = s*s;
    }
    for(i=0; i<size; i++)
    {
        sum6 = sum6 + ar6[i];
    }
    printf("Now the final result is:%f\n", sum6);
    return 0;
}