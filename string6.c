#include <stdio.h>
void main()
{
  int i=0, j=0;
  char str_init[30] = "Your name is: ";
  char str_name[] = "Miskatul Anwar";
  int len = 0;
  while(str_init[i]!='\0')
  {
    i++;
    len++;
  }
  while(str_name[j]!='\0')
  {
    str_init[len+j] = str_name[j];
    j++;
  }
  printf("%s", str_init);

}
