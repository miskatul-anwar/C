#include "miskat.h"
int main(void){
  int array_length = get_int("Enter the amount of data: ");
  int *x = get_array("Enter some numbers:\n",array_length);
  //linear search
  int value = get_int("Enter a number to search:");
  int count = 0;
  int index;
  for(int i=0;i<array_length;i++){
    if(value == x[i]){
      count++;
      index = i;
      printf("index = %i\n",index);
    }else{
      continue;
    }
  }
  if(count!=0){
    printf("The value %i found for %i times.\n",value,count);
  }else{
    printf("Not found.\n");
  }
  free(x);
}
