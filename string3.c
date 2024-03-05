#include <stdio.h>
int main()
{
  char str_name[30];
  printf("This program calculates the length of your name: ");
  gets(str_name);
  int i=0;
  while(str_name[i]!='\0')
  {
    i++;
  }
  printf("length = %d\n",i);
}
