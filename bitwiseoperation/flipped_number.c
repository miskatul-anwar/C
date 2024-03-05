#include <stdio.h>
int main(void){
  int number, flipped_number;
  printf("Enter a number: ");
  scanf("%d", &number);
  flipped_number = ~number;
  printf("number\tFlipped\n");
  printf("%d\t%d\n",number,flipped_number);
  return 0;
}
