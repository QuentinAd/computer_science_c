#include <stdio.h>

void selection_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    if (min_index != i) {
      int temp = arr[i];
      arr[i] = arr[min_index];
      arr[min_index] = temp;
    }
  }
}

static void print_array(const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr[] = {3, 8, 1, 5, 2};
  int size = (int)(sizeof(arr) / sizeof(arr[0]));

  selection_sort(arr, size);
  print_array(arr, size);

  return 0;
}
