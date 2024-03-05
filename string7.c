#include <stdio.h>
#include <string.h>
void main()
{
  char str_name[] = "Miskatul Anwar";
  int len = strlen(str_name);
  char str_char[] = "My name is: ";
  int s = strcmp(str_name,str_char);
  s ==0? printf("Equal\n"):printf("Not Equal\n");
  char rev[] = strrev(str_name);
  for(int k=0;k<len;k++)
  {
    printf("%c\n",rev[k]);
  }
}
