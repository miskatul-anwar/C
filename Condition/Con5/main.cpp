/*This is a program to check the eligibility of a candidate for army reqruitment*/
#include<stdio.h>
main()
{
    float height,weight;
    int age;
    printf("Your height in meters:");
    scanf("%f",&height);
    printf("Your weight in kg:");
    scanf("%f",&weight);
    printf("Your age in years:");
    scanf("%d",&age);
    if (height<1.5)
    {
        printf("You are not eligible.");
    }
    else if(weight<59)
    {
        printf("You are not eligible.");
    }
    else if (age<=17 && age>=22)
    {
        printf("You are not eligible.");
    }
    else
    {
        printf("You are eligible.");
    }

}

