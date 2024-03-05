#include <stdio.h>
#include<math.h>
int main()
{
int i;
double a, charge;
printf("Welcome! to electricitychoice.com\n");
printf("You'll be glad to hear that we're\n");
printf("providing unlimited Electric connection\n");
printf("at a very low price range....!");
printf("\n");
for(i=1;i<=50;i++)
{
printf("*", i);
}
printf("\n");
printf("Enter The Net consumed Electricity(Units):");
scanf("%lf", &a);
if(a<=200)
{
charge = a*0.8;
}
else if(200<a<=300)
{
charge = a*0.9;
}
else
{
charge = a*1;
}
printf("Please pay:%.2lftk.",(charge+100));
printf("\n");
for(i=1;i<=50;i++)
{
printf("*", i);
}
printf("\n");
return 0;
}
