#include <stdio.h>

static int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;

  return i + 1;
}

static void quick_sort_range(int arr[], int low, int high) {
  if (low < high) {
    int pivot_index = partition(arr, low, high);
    quick_sort_range(arr, low, pivot_index - 1);
    quick_sort_range(arr, pivot_index + 1, high);
  }
}

void quick_sort(int arr[], int size) { quick_sort_range(arr, 0, size - 1); }

static void print_array(const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr[] = {12, 4, 5, 6, 7, 3, 1};
  int size = (int)(sizeof(arr) / sizeof(arr[0]));

  quick_sort(arr, size);
  print_array(arr, size);

  return 0;
}
