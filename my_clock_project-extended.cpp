#include "stdio.h"
#include "iostream"
#include "unistd.h"

int main(void){
  int hours, minutes, seconds;
  printf("\n================================\n");
  printf("HOURS = ");
  scanf("%d", &hours);
  printf("MINUTES = ");
  scanf("%d", &minutes);
  printf("It's a 24hr clock....!");
  printf("\n=================================\n");
  while(1){
    for(int j=hours;j<23;j++){
      for(int k=minutes;k<=59;k++){
        for(int l=0;l<=59;l++){
          printf("\r%2d:%2d:%2d",j,k,l);
          fflush(stdout);
          usleep(1000000);
        }
        minutes = 0;
      }
      hours = 0;
    }
  }
  printf("\n================================\n");
}
