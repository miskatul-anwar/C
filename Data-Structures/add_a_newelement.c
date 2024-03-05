#include "miskat.h"
int main(void){
    const int n =get_int("Enter the length of array: ");
    if(n<3){
        //Exit with an error code
        return 0;
    }
    int *list=malloc(n*sizeof(int));
    if(list == NULL){
        //handle memory allocation error
        return 1;
    } 
    *list = 2;*(list+1) = 23; *(list+2)=5;
    int *temp = realloc(list,n*sizeof(int));
    if(temp == NULL){
        //handle memory allocation error
        return 1;
    }
    for(int i=3;i<n;i++){
        *(temp+i) = i;
    }
    list = temp;
    for(int i=0;i<n;i++){
        printf("%i\n",*(list+i));
    }
    free(list);free(temp); //free the used memory
    return 0;
}