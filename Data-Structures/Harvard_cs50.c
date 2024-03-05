
#include<stdio.h>
#include<string.h>

int main(void){
    // int n=5;
    // // int *p = &n;
    // printf("%i\n",n);
    // printf("%p\n",p);
    char *s = "Hi!";
    for(int i=0; s[i]!='\0';i++){
        printf("%p ==> %c\n",s[i],s[i]);
    }
    char *p = &s[0];
    printf("p==>%p\n",p);
    printf("s[0]=>%p\n",s);
    printf("%c\n", *s);
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
    printf("%c\n",*(s+3));
}