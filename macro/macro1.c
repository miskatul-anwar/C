#include <stdio.h>
#define N 10
int main(void){
  int array[100];
  int i=0;
  FILE *trace_file;
  trace_file = fopen("data.txt", "w");
  for(;;){
    if(i>=N){
      break;
    } else {
      scanf("%d",&array[i]);
      fprintf(trace_file,"%d ",array[i]);
    }
    i++;
  }
  return 0;
}
