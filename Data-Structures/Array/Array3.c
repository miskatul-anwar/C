#include<math.h>
#include<stdio.h>
int main()
{
    int ar[100],n, temp, i, square[100];
    float sum=0;
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
    for ( i = 0; i < n; i++)
    {
        sum= sum + ar[i];
    }
    printf("sum=%f\n", sum);
    printf("Avarage=%f", sum/n);
    float mean = sum/ n;
    float dsum = 0;
    for(i=0; i<n; i++)
    {
        temp = mean - ar[i];
        square[i]= temp* temp;
        dsum = dsum + ar[i];
    }
    printf("Dsum=%f", dsum);
    float dmean = dsum/n;
    printf("variance=%f", dmean);
    float s =sqrt(dmean);
    printf("standard deviation=%f", s);
    return 0;
}