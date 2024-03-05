#include <stdio.h>
#include <stdlib.h>
#define N 3


int main(void){
  int mat1[N][N], mat2[N][N], matrix[N][N]; int *p; int row = 0 ,col = 0;
  printf("This is a program to multiply two matrix: "); printf("\n");
  for(;;){
    if(row < N){
      for(col = 0; col <= row; col++){
        *(p+col) = &mat1[row][col];
        printf("mat1[%i][%i] = ", row, col);
        scanf("%i", p+col);
      }  
    }else{
      break;
    }
    row++;
  }
  row = 0; col = 0;
  for(;;){
    if(row < N){
      for(col = 0; col <= row; col++){
        *(p+5+col) = &mat2[row][col];
        printf("mat2[%i][%i] = ", row, col);
        scanf("%i", p+col+5);
      }  
    }else{
      break;
    }
    row++;
  }

  row = 0; col = 0;
  /* ==> count++ --> */ int count = 0;
  
   /*************************************
     *     now multiply the matrix (^_^) *
      *                                   *
       *************************************/ 


  for(row = 0; row < N; row++){
    for(col = 0; col < N; col++){
      matrix[row][col] = 0;
      for(;count<N;count++){
        matrix[row][col] += mat1[row][count]*mat2[count][row];
      }
      printf("%i ", matrix[row][col]);
    }
    printf("\n");
  }
  exit(1);
  

}
