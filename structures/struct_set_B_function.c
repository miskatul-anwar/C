#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct point{
  int x;
  int y;
}p;
void InOut_check(p center);
int main(void){
  p center;
  printf("x = ");
  scanf("%d",&center.x);
  printf("y = ");
  scanf("%d",&center.y);
  InOut_check(center);
}
void InOut_check(p center){
  int radius = sqrt(pow((center.x-5),2)+pow((center.y-7),2));
  if(radius<=7){
    printf("Inside.\n");
  }else{
    printf("Outside.\n");
  }
}
