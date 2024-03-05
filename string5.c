#include <stdio.h>
void main()
{
  char generic_initial[] = "My name is ";
  char name_store[] = "Miskatul Anwar";
  strcat(generic_initial, name_store);
  printf("%s\n",generic_initial);
}
