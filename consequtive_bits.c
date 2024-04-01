#include <stdio.h>

unsigned int swapConsecutiveBits(unsigned int x) {
  // Mask to select all even bits
  unsigned int even_bits = x & 0xAAAAAAAA;
  // Mask to select all odd bits
  unsigned int odd_bits = x & 0x55555555;
  // Right shift even bits to make them odd
  even_bits >>= 1;
  // Left shift odd bits to make them even
  odd_bits <<= 1;
  // Combine even and odd bits to get the final result
  return even_bits | odd_bits;
}

int main(void) {
  unsigned int x;
  printf("Enter an integer: ");
  scanf("%u", &x);

  unsigned int result = swapConsecutiveBits(x);
  printf("After swapping consecutive bits: %u\n", result);

  return 0;
}
