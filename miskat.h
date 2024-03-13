#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define initiate main
#define N 100
#define sys_var "number"
#define sys_var1 "name"
#define sys_var2 "age"
#define sys_var3 "id"
#define pi 3.1416f
#define _180D_angle 2 * 3.1416
#define sum(m, n) m + n
#define sub(m, n) m - n
#define mul(m, n) m *n
#define div(m, n) m / n
#define kmh_to_ms(m) m / 3.6
#define ms_to_kmh(m) m * 3.6
#define hello                                                                  \
  { printf("Hello World!\n"); }

#define loop_straight(n)                                                       \
  for (int i = 0; i < n; i++) {                                                \
    printf("%i ", i);                                                          \
  }

#define loop_reverse(n)                                                        \
  for (int i = n; i >= 0; i--) {                                               \
    printf("%i", i);                                                           \
  }

#define loop(start, end, increment)                                            \
  for (int i = start; i <= end; i = i + increment) {                           \
    printf("%i\n", i);                                                         \
  }

#define get_string_min(s)                                                      \
  { scanf("%[a-zA-Z0-9_]s", s); }

#define get_string(s, limit)                                                   \
  { fgets(s, limit, stdin); }

#define entry(name)                                                            \
  { printf("Enter the %s: ", name); }

#define result(text_to_prompt)                                                 \
  { printf("%s", text_to_prompt); }

#define show(name)                                                             \
  { printf("%s", name); }

#define bar(limit, given)                                                      \
  {                                                                            \
    for (int i = 0; i < limit; i++) {                                          \
      printf("%c", given);                                                     \
    }                                                                          \
    printf("\n");                                                              \
  }

#define get_int(text_to_prompt)                                                \
  ({                                                                           \
    int input;                                                                 \
    printf("%s", text_to_prompt);                                              \
    scanf("%d", &input);                                                       \
    input;                                                                     \
  })

#define get_float(text_to_prompt)                                              \
  ({                                                                           \
    float input;                                                               \
    printf("%s", text_to_prompt);                                              \
    scanf("%f", &input);                                                       \
    input;                                                                     \
  })

#define max(input1, input2)                                                    \
  ({                                                                           \
    int max;                                                                   \
    if (input1 > input2) {                                                     \
      max = input1;                                                            \
    } else {                                                                   \
      max = input2;                                                            \
    }                                                                          \
    max;                                                                       \
  })
#define get_array(text_to_prompt, limit)                                       \
  ({                                                                           \
    int *input = malloc(N * sizeof(int *));                                    \
    printf("%s", text_to_prompt);                                              \
    for (int i = 0; i < limit; i++) {                                          \
      scanf("%d", &input[i]);                                                  \
    }                                                                          \
    input;                                                                     \
  })
#define get_char(text_to_prompt)                                               \
  ({                                                                           \
    char input;                                                                \
    printf("%s", text_to_prompt);                                              \
    scanf("%c", &input);                                                       \
    input;                                                                     \
  })

#define get_long(text_to_prompt)                                               \
  ({                                                                           \
    long input;                                                                \
    printf("%s", text_to_prompt);                                              \
    scanf("%li", &input);                                                      \
    input;                                                                     \
  })
