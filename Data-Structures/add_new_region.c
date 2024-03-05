#include "miskat.h"
int main(void){
  int *list = malloc(4*sizeof(int));
  if(list == NULL){
    //handle memory allocation error
    return 1;
  }
  *(list+0)=0;
  *(list+1)=1;
  *(list+2)=2;
  int *tmp = malloc(4*sizeof(int));
  if(tmp==NULL){
    //handle memory allocation error
    return 1;
  }
  for(int i=0;i<3;i++){
    *(tmp+i)=*(list+i); //entering the whole array to tmp 
  }
  *(tmp+3) = 3; //adding another new element in array
  for(int i=0;i<4;i++){
    *(list+i) = *(tmp+i);
  }
  for(int i=0;i<4;i++){
    printf("%i\n",*(list+i));
  }
  //free the used memory
  free(tmp);
  free(list);
  return 0;
}
