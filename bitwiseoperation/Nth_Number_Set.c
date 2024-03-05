#include <stdio.h>
int main(void){
  int num,n;
  printf("Enter the number and the position to set: ");
  scanf("%d%d", &num,&n);
  int bit_set = (1<<n)|num;
  printf("The %dth bit set to %d\n",n,bit_set);
  return 0;
}
