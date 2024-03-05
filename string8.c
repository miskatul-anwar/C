#include<stdio.h>
#include<string.h>
int main()
{
  char str_name[20]="Miskatul Anwar";
  char str_name_rev[20];
  int len = strlen(str_name);
  for(int i=0;i<=len-1;i++)
  {
    str_name_rev[i]=str_name[len-1-i];
  }



//this should print the name in reverse.
  printf("%s", str_name_rev);
}
