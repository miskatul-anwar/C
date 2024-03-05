#include<stdio.h>
int main()
{
    double num1,num2, result;
    char Operator;
    //input from the user
    printf("Enter The First Number:");
    scanf("%lf",&num1);
    printf("Enter operator(+,-,*,/):");
    scanf(" %c", &Operator);
    //Note the space before %c to consume any newline character
    printf("Enter The Second number:");
    scanf("%lf",&num2);
    //perform the calculation based on the operator
    switch(Operator)
    {
    case '+':
    result=num1+num2;
    break;
    case '-': result=num1-num2;
    break;
    case '*': result=num1*num2;
    break;
    case '/':
        if(num2!=0)
        {
            result=num1/num2;
        }
        else
        {
            printf("Error: Division by zero\n");
            return 1; //Exit with an error code
        }
    break;
    default: printf("Invalid Operator.\n");
    return 1; //Exit with an error code
    }
    //output the result
    printf("Result=%.2lf\n", result);
    return 0; //Exit Normally


}
