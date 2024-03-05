#include <stdio.h>
#include <stdlib.h>
int main(void){
  char *s = malloc(2*sizeof(char));
  s = "Hi!";
  for(int i = 0; *(s+i) != '\0'; i++){
    printf("%c",*(s+i));
  }
}
