#include "utils.h"
#include <stdbool.h>
#include <stddef.h>

// swap two elements
void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// check if array is sorted, if yes return true
// if not return false
bool is_sorted_nondecreasing(int *arr, int n) {
    if (arr == NULL || n <= 1) {
        return true;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// copy array elements src into dst
void copy_array(int *src, int *dst, int n) {
    for (int i = 0; i < n; i++) {
        dst[i] = src[i];
    }
}