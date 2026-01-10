#include <stdio.h>

void insertion_sort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

static void print_array(const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr[] = {9, 4, 6, 2, 7};
  int size = (int)(sizeof(arr) / sizeof(arr[0]));

  insertion_sort(arr, size);
  print_array(arr, size);

  return 0;
}
