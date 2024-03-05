#include<stdio.h>
int square(int row, int col);
int main()
{
  int row, col;
  printf("Enter row and column:\n");
  scanf("%d%d");
  square(row, col);
}
int square(int row, int col)
{
  for(int i=1; i<=row; i++)
  {
    for(int j=1; j<=col; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
