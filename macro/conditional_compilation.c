#include "miskat.h"
#define AREA
void main(void){
    float Area;
    long radius = get_int("Radius = ");
    Area = mul(pi,radius*radius);
    //This will printout the area of the circle
    #ifdef AREA 
    result("Area = ");printf("%f" ,Area);
    #else
    float Circumstance = mul(2*pi,radius);
    result("Circumstance = ");printf("%f",Circumstance);
    #endif
}