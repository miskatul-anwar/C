#include "miskat.h"

INT initiate(void)
BEGIN
  for(int i = 0; i < 10; i++)
    BEGIN
      for(int j =0 ;j<10; j++)
        BEGIN
          printf(" * ");
        END 
      printf("\n");
    END
  EXIT
END 
    
