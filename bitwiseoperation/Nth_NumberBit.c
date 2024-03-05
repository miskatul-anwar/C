#include <stdio.h>
int main(void){
  int num,n;
  printf("Enter a Number: ");
  scanf("%d",&num);
  printf("Enter the bit to check(1-31): ");
  scanf("%d",&n);
  int bit_stats = (num>>n) & 1;
  printf("The %dth bit of is %d\n",n,bit_stats);
}
