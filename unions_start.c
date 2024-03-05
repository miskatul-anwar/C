#include<stdio.h>
union data{
  char *name;
  int id;
};
int main(void){
  union data s;
  s.id = 5;
  printf("%d",s.id);
}
