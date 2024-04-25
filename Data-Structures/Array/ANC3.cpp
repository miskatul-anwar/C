#include <stdio.h>

int main() {
  int i, temp;
  int nums1[] = {1, 2, 2, 1};
  int nums2[] = {2, 2};
  int intersection[4] = {};
  for (i = 0; i < 4; i++) {
    temp = nums1[i];
    if (i < 2 && nums2[i] == temp) {
      intersection[i] = temp;
    }
  }
  for (int j = 0; j < 4; j++) {
    if (intersection[j] == 0) {
      continue;
    }
    printf("%d ", intersection[j]);
  }
  printf("\n");
  return 0;
}
