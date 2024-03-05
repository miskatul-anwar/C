#include <stdio.h>
#include <string.h>
int main()
{
  char str_name[30];
  char str_swap[30];
  printf("Enter first string: ");
  gets(str_name);
  printf("Enter second string: ");
  gets(str_swap);
  int len = strlen(str_name);
  int temp;
  for(int i=0;i<=len-1;i++)
  {
    temp=str_name[i];
    str_name[i]=str_swap[i];
    str_swap[i]=temp;
  }
  //now full string swapped 
  printf("first string: %s\n", str_name);
  printf("second string: %s\n",str_swap);
}
