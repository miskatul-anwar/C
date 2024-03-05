/**************************
 * This program will check*
 *     if the given       *
 *num is positive or not  *
 **************************/
#include "miskat.h"
#define condx1
#ifdef condx1 
void initiate(void){
  int n = get_int("Enter a number: ");
  if((n>>0) & 1){
    #define cond1
  }else if ((n<<0) & 1){
    #define cond2;
  }else {
    #define cond3;
  }
  #ifdef cond1
    printf("positive\n");
  #elif cond2
    printf("Negative\n");
  #elif cond3 
    printf("Equals zero\n");
  #endif
 }



#elif condx2 
void initiate(void){
  /******/
}
#endif
