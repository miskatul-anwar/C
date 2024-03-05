#include <stdio.h>
int main()
{
  printf("\tThis program calculates the length of name\n");
  char str_name[30];
  printf("\tEnter your name: ");
  gets(str_name);
  int i=0;
  while(str_name[i]!='\0')
  {
    printf("%c\n",str_name[i]);
    i++;
  }
  int length = strlen(str_name);
  printf("\tlength = %d\n",length);
  return 0;
}
