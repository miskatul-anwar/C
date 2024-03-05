#include "miskat.h"
typedef struct name{
  char character;
  struct name *link;
}
  name;
int main(void){
  name *fullname = NULL;
  name *part = malloc(sizeof(name));

  part->character = 'M';
  fullname = part;

  part = malloc(sizeof(name));

  part->character = 'i';
  fullname->link = part;

  part = malloc(sizeof(name));
  
  part->character= 's';
  fullname->link->link = part;

  part = malloc(sizeof(name));
  
  part->character = 'k';
  fullname->link->link->link= part;

  part = malloc(sizeof(name));

  part->character = 'a';
  fullname->link->link->link->link = part;

  part = malloc(sizeof(name));
  
  part->character = 't';
  fullname->link->link->link->link->link = part;

  //Now, printing the entered data
  name *temp = fullname;
  for(;;){
    if(temp != NULL){
      printf("%c", temp->character);
      temp = temp->link;
    }else{
      break;
    }
  }
  printf("\n");
  
  //let's free the used memory
  while(fullname != NULL){
    name *temp = fullname->link; 
    free(fullname);
    fullname = temp;
  }
  return 0;
}

//\\==> This code actually prints out my name (^_^)
