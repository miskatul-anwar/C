#include <stdio.h>

int linear_search(int search_value, int array[], int size);
int binary_search(int array[], int size, int search_value);

int main(void) {
  int search_value;
  int array[7] = {1, 5, 6, 23, 33, 67, 67};
  int size = 7; // Size of the array
  printf("Enter the value you need to search: ");
  scanf("%d", &search_value);

  // Using linear search
  linear_search(search_value, array, size);

  // Using binary search
  int binary_result = binary_search(array, size, search_value);
  if (binary_result != -1) {
    printf("Searched value %d found at %dth position using binary search.\n",
           search_value, binary_result + 1);
  } else {
    printf("Value is not available using binary search.\n");
  }

  return 0;
}

int linear_search(int search_value, int array[], int size) {
  int found = 0; // Variable to track if value is found

  for (int i = 0; i < size; i++) {
    if (search_value == array[i]) {
      printf("Searched value %d found at %dth position using linear search.\n",
             search_value, i + 1);
      found = 1; // Set found to 1 if value is found
    }
  }

  if (!found) { // If value is not found after the loop
    printf("Value is not available using linear search.\n");
  }

  return 0;
}

int binary_search(int array[], int size, int search_value) {
  int low = 0, mid, high = size - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (array[mid] == search_value) {
      return mid;
    }
    if (array[mid] < search_value) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1; // Return -1 if the element is not found
}
