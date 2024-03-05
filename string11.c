#include <stdio.h>
void main()
{
  char string[30];
  char ch;
  printf("Enter a data: ");
  gets(string);
  int digit, capital,small, i;
  i=capital=small=digit=0;
  while((ch=string[i])!='\0')
  {
    if(ch>=65 && ch<=90)
    {
      capital++;
    }
    if(ch>=97 && ch<=122)
    {
      small++;
    }
    if(ch>=48 && ch<=57)
    {
      digit++;
    }
    i++;
  }


  //Now print these functions


  printf("Number of capital letters: \t%d\n", capital);
  printf("Number of small letters: \t%d\n", small);
  printf("Number of digits:         \t%d\n", digit);
}
