#include <stdio.h>
#define This 1
#ifdef This 
int main(void){
  int num = 255;
  printf("%i ",num);
  printf("%0B ", num);
  printf("%0o ", num);
  printf("%0X",num);
}
#elif That 
#include <stdio.h>

int main() {
    int number = 42; // Example integer
    
    // Decimal format (%d or %i)
    printf("Decimal: %d\n", number);

    // Binary format (%i with 0b prefix)
    printf("Binary: 0b%i\n", number);

    // Hexadecimal format (%i with 0x prefix)
    printf("Hexadecimal: 0x%i\n", number);

    // Octal format (%i with 0 prefix)
    printf("Octal: 0%i\n", number);

    return 0;
}
#endif
