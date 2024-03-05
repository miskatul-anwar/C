#include <stdio.h>
int main(void){
  int t;
  int i=0;
  //t=> temperature
  printf("Enter Temperatue: ");
  scanf("%d", &t);
  if(t>=31 && t<=34){
    i++;
  }
  if(t>=22 && t<=23){
    i++;
  }
  if(t>=89 && t>=92){
    i++;
  }
  if(t>=0 && t<=10){
    i++;
  }
  if(t>=6 && t<=9){
    i++;
  }
  if(i>3){
    printf("High\n");
  }else if(i==3){
    printf("Moderate\n");
  }else if(i<3){
    printf("No");
  }
}
