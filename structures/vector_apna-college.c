#include <stdio.h>

//usr defined
typedef struct calculate_the_sum_of_vector{
  int x;
  int y;
}vct;

//prototype
void summation(vct v1,vct v2, vct sum);

//body
int main(void){
  vct v1={5,7};
  vct v2={7,5};
  vct sum = {0};
  summation(v1, v2, sum);
  return 0;
}

//definition
void summation(vct v1, vct v2, vct sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.x;
  printf("sum of x is : %d\n",sum.x);
  printf("sum of y is : %d\n",sum.y);
}

