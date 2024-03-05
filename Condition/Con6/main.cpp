#include<stdio.h>
main()
{
    int age;
    printf("Your age:");
    scanf("%d",&age);
    if (age>18 && age<35)
    {
        printf("You're eligible");
    }
    else
    {
        printf("You're not eligible.");
    }

}
