#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char s[10], z[10];
    gets(s);//gets(t);
    
    char *t = malloc(strlen(s)+1);
    int n, i;
    for(i=0, n = strlen(s)+1; i<n; i++){
        t[i] = s[i];
    }
    strcpy(z,s);
    if(strcmp(s,t)==0){
        printf("Same.\n");
    }else{
        printf("Different.\n");
    }
    printf("%s\n",s);
    printf("%s\n",t);
    printf("%s\n",z);
    free(t);

    int *x = malloc(3 * sizeof(int));
    *(x+0) = 72;
    *(x+1) = 30;
    *(x+2) = 45;
    printf("%d",x[0]);
}
