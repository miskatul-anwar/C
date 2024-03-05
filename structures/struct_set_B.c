#include <stdio.h>
#include <math.h>
typedef struct point{
  int x;
  int y;
}p;
int main(void){
  int m,n;
  p center;
  printf("x = ");scanf("%d",&center.x);
  printf("y = ");scanf("%d",&center.y);
  int radius= sqrt(pow((center.x-5),2)+pow((center.y-7),2));
  if(radius<=7){
    printf("Inside.\n");
  }else{
    printf("Outside.\n");
  }
}
