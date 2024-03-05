#include <stdio.h>
main()
{
float a, b, c, d,n;
  printf("This is a program to check the eligibility of BAFA-89 candidates\n");
  printf("\n");
  for(n=1;n<75;n++)
  {
  printf("*");
  }
  printf("\n");
//Now enter the needed informations
  printf("Enter the age of the candidate:");
  //age
  scanf("%f",&a);
  printf("\n");
  printf("Enter the height of the candidate(meters):");
  //height in meters
  scanf("%f",&b);
  printf("\n");
  printf("Enter the weight of the candidate(kg):");
  // weight in kg(kilograms)
  scanf("%f",&c);
  printf("\n");
  printf("Enter the grade(HSC) of the candidate:");
  //HSC grade cannot be lower than 3.50
  scanf("%f",&d);
  printf("\n");
  if (a>=18 && a<=22 || b>=1.5 || c>=55 && c<=90 || d>=3.5)
  {
  printf("Congratulations! You're elligible to apply for the post of an officer cadet. For more information, please visit our official site.\n");
  }
  else
  {
  printf("Sorry, for some rules and regulations, you cannot apply for this post. Learn more about our selection procedure in our official site.\n");
  }
}


