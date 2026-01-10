#include "sort.h"

#include <stdlib.h>

void bubble_sort(int *arr, int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void insertion_sort(int *arr, int n) {
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

void selection_sort(int *arr, int n) {
  for (int i = 0; i < n - 1; ++i) {
    int min_index = i;
    for (int j = i + 1; j < n; ++j) {
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

static void merge(int *arr, int left, int mid, int right, int *temp) {
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

  for (int idx = left; idx <= right; ++idx) {
    arr[idx] = temp[idx];
  }
}

static void merge_sort_range(int *arr, int left, int right, int *temp) {
  if (left >= right) {
    return;
  }

  int mid = left + (right - left) / 2;
  merge_sort_range(arr, left, mid, temp);
  merge_sort_range(arr, mid + 1, right, temp);
  merge(arr, left, mid, right, temp);
}

void merge_sort(int *arr, int n) {
  int *temp = malloc((size_t)n * sizeof(int));
  if (!temp) {
    return;
  }

  merge_sort_range(arr, 0, n - 1, temp);
  free(temp);
}

static int partition(int *arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; ++j) {
    if (arr[j] <= pivot) {
      ++i;
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

static void quick_sort_range(int *arr, int low, int high) {
  if (low < high) {
    int pivot_index = partition(arr, low, high);
    quick_sort_range(arr, low, pivot_index - 1);
    quick_sort_range(arr, pivot_index + 1, high);
  }
}

void quick_sort(int *arr, int n) { quick_sort_range(arr, 0, n - 1); }
