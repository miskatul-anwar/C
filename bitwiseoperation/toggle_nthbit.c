#include <stdio.h>
int main(void){
  int num,n, bit;
  scanf("%d%d",&num,&n);
  printf("%X\n",num);
  bit = num ^ (1<<n);
  printf("%X\n",bit);
}
