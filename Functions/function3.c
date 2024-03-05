#include<stdio.h>
void corruption();
void aplus();
void a();
void aminus();
void b();
void c();
void d();
void f();
int main()
{
    float marks;
    printf("Enter total marks:");
    scanf("%f", &marks);
    printf("Your Result is: ");
    if(marks>100)
    {
        corruption();
    }
    else if(marks >= 80)
    {
        aplus();
    }
    else if(marks >= 70)
    {
        a();
    }
    else if (marks>=60)
    {
        aminus();
    }
    else if(marks>=50)
    {
        b();
    }
    else if (marks>=40)
    {
        c();
    }
    else if(marks>=33)
    {
        d();
    }
    else if(marks<33)
    {
        f();
    }
    
}
//Now evaluate these functions
void corruption()
{
    printf("corrupted\n");
}
void aplus()
{
    printf("A+\n");
}
void a()
{
    printf("A\n");
}
void aminus()
{
    printf("A-\n");
}
void b()
{
    printf("B\n");
}
void c()
{
    printf("C\n");
}
void d()
{
    printf("D\n");
}
void f()
{
    printf("F\n");
}