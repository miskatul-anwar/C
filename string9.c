#include<stdio.h>
#include <string.h>
int main()
{
  char str_name[30];
  printf("Enter a number:");
  gets(str_name);
  strupr(str_name);
  printf("Upper case: %s", str_name);
  strlwr(str_name);
  printf("Lower case: %s", str_name);
    
  return 0;
}
