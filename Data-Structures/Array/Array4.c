#include<stdio.h>
int main()
{
    int s;
    s = miskat();
    printf("s=%d\n", s);
}
int miskat()
{
    int sum = 0;
    int marks[5]= {1, 2, 3, 4, 5};
    for(int i; i<=5; i++)
    {
        sum = sum + marks[i];
    }
}