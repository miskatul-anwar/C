#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c, d;
  printf("Enter four numbers:");
  scanf("%d %d%d%d",&a,&b,&c,&d);
  if (a>b>c>d)
  {
  printf("Largest=%d",a);
  }
  else
  {
  printf("NO");
  }
  return 0;
}
