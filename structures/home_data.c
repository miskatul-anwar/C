#include <stdio.h>
#include <string.h>

//user defined
typedef struct address_of_a_house_in_bangladesh{
  int house_no;
  char block;
  char *city;
  char *state;
}ads;

//declaration statement or function prototype
void printdata(ads h);

int main(void){
  ads h[5];
  //input
  printf("Enter the info for persion 1: ");
  scanf("%d",&h[0].house_no);
  scanf(" %c",&h[0].block);
  scanf("%s",h[0].city);
  scanf("%s",h[0].state);

  printf("Enter the info for persion 2: ");
  scanf("%d",&h[1].house_no);
  scanf(" %c",&h[1].block);
  scanf("%s",h[1].city);
  scanf("%s",h[1].state);

  printf("Enter the info for persion 3: ");
  scanf("%d",&h[2].house_no);
  scanf(" %c",&h[2].block);
  scanf("%s",h[2].city);
  scanf("%s",h[2].state);

  printf("Enter the info for persion 4: ");
  scanf("%d",&h[3].house_no);
  scanf(" %c",&h[3].block);
  scanf("%s",h[3].city);
  scanf("%s",h[3].state);

  printdata(h[0]);
  printdata(h[1]);
  printdata(h[2]);
  printdata(h[3]);
  printdata(h[4]);
  return 0;
}

//definition
void printdata(ads h){
  printf("Address is:house no. %d, block %c, %s, %s",h.house_no,h.block,h.city,h.state);
}
