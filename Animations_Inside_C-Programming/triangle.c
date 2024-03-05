#include "miskat.h"
INT initiate(void)
BEGIN
  for(INT I = 0; I < 10; I++)
    BEGIN
      for(INT J = 0; J <= I; J++)
        BEGIN 
          printf(" * ");
        END 
      printf("\n");
    END 
  EXIT
END
