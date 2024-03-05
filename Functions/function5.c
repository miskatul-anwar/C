#include<stdio.h>
//This is a program to create table of any number
void printTable(int n);
//creating a function using for
int main()
{
    //n is the targeted number
    int n;
    printf("n=");
    scanf("%d", &n);
    //entering the value of n
    printTable(n);
    //actual parameter
}
void printTable(int n)//formal parameter
{
    for(int i=1; i<=100; i++)
    {
        //creating a loop for the table
        printf("%d x %d = %d\n", n, i, n*i);
    }
}