#include <stdio.h>
typedef struct data{
    char name[30];
    int id;
    char university_name[30];
    //this is a block of code that will collect a students data
}info;
int main(void){
    
    info person1={"Miskatul Anwar", 53, "University of Chittagong"}, person2={"Jishan Shikdar", 56,"University of Chittagong"};
    if(person1.id==person2.id){
        printf("They are same.\n");
    }else{
        printf("The are different.\n");
    }
    return 0;
}

