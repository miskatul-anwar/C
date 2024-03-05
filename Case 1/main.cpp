#include<stdio.h>
#include<math.h>
main()
{
    int day;
    printf("Enter Day(1-7):");
    scanf("%d",&day);
    switch(day)
    {
        case 1: printf("Saturday\n");
        break;
        case 2: printf("Sunday\n");
        break;
        case 3: printf("Monday\n");
        break;
        case 4: printf("Tuesday\n");
        break;
        case 5: printf("Wednesday\n");
        break;
        case 6: printf("Thursday\n");
        break;
        case 7: printf("Friday\n");
        break;
        default:printf("Not a valid day.\n");
    }
    printf("Thank You.\n");
    return 0;
}
