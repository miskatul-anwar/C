#include<stdio.h>
#include<string.h>
int main(void){
    char *typed_data;
    printf("Enter Something: ");gets(typed_data);
    int count=0, len=strlen(typed_data);
    for(int i=0;i<10;i++){
        for(int j=0;j<len;j++){
            if(typed_data[j]==*typed_data+i){
                count++;
            }else{
                continue;
            }
        }
        printf("%d ",count);
        count=0;
    }
}