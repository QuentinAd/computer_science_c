#include <stdio.h>
#include <stdlib.h>

static void merge(int arr[], int left, int mid, int right, int temp[]) {
  int i = left;
  int j = mid + 1;
  int k = left;

  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j]) {
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
    }
  }

  while (i <= mid) {
    temp[k++] = arr[i++];
  }

  while (j <= right) {
    temp[k++] = arr[j++];
  }

  for (int idx = left; idx <= right; idx++) {
    arr[idx] = temp[idx];
  }
}

static void merge_sort_range(int arr[], int left, int right, int temp[]) {
  if (left >= right) {
    return;
  }

  int mid = left + (right - left) / 2;
  merge_sort_range(arr, left, mid, temp);
  merge_sort_range(arr, mid + 1, right, temp);
  merge(arr, left, mid, right, temp);
}

void merge_sort(int arr[], int size) {
  int *temp = malloc((size_t)size * sizeof(int));
  if (!temp) {
    return;
  }

  merge_sort_range(arr, 0, size - 1, temp);
  free(temp);
}

static void print_array(const int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  int arr[] = {10, 3, 15, 7, 8, 23, 98, 29};
  int size = (int)(sizeof(arr) / sizeof(arr[0]));

  merge_sort(arr, size);
  print_array(arr, size);

  return 0;
}
