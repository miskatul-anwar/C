#include <stdio.h>
#include <math.h>
int main(void){
  //if the given point is (x,y)
  float x, y;
  printf("Enter the point(x,y): \n");
  scanf("%f%f",&x,&y);
  float rad = sqrt((x-5)*(x-5)+(y-7)*(y-7));
  if(rad<=7){
    printf("Yes, the program is inside.\n");
  }else{
    printf("No, the program is outside.\n");
  }
  return 0;
}
