#include<stdio.h>
main()
{
    float marks;
    printf("Total marks in 100:\n");
    scanf("%f",&marks);
    if(marks>100)
    {
        printf("Your result is corrupted.");
    }
    else if (marks>=80)
    {
        printf("Your grade is: A+");
    }
    else if(marks>=70)
    {
        printf("Your grade is: A");
    }
    else if(marks>=60)
    {
        printf("Your grade is: A-");
    }
    else if(marks>=50)
    {
        printf("Your grade is: B");
    }
    else if(marks>=40)
    {
        printf("Your grade is: C");
    }
    else if(marks>=33)
    {
        printf("Your grade is: D");
    }
    else
    {
        printf("Your grade is: F");
    }

}
