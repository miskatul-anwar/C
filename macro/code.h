#include "stdio.h"
#define get_int(text_prompt)                                                   \
  ({                                                                           \
    int input;                                                                 \
    scanf("%d", &input);                                                       \
    input;                                                                     \
  })
