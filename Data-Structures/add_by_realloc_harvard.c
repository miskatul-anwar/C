#include "miskat.h"
int main(void){
    int *list = malloc(4*sizeof(int));
    if(list == NULL){
        //handle memory allocation error
        return 1;
    }
    *(list+0) = 0;
    *(list+1) = 1;
    *(list+2) = 2;
    //Now, resize the old array to be size 4
    int *tmp = realloc(list,4*sizeof(int));
    if(tmp == NULL){
        //handle memory allocation error
        return 1;
    }
    *(tmp+3) = 3;
    for(int i=0;i<4;i++){
        *(list+i)=*(tmp+i);
        printf("%i\n",*(list+i));
        //assigning and printing the whole array
    }
    free(tmp);
    return 0;
    
}