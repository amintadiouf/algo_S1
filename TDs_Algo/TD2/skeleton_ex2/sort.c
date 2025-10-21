#include <stdlib.h>
#include "sort.h"
#include "utils.h"

//   Les tris itératifs

// selection sort iterative
void selection_sort(int *arr, int n) {

    if (is_sorted_nondecreasing(arr, n)) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap_int(&arr[min_idx], &arr[i]);
    }
}


// insertion sort iterative
void insertion_sort(int *arr, int n) {
    if (is_sorted_nondecreasing(arr, n)) {
        return;
    }

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// bubble sort iterative
void bubble_sort(int *arr, int n) {
    if (is_sorted_nondecreasing(arr, n)) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap_int(&arr[j], &arr[j + 1]);
            }
        }
    }
}


//              Les tris récursifs

//merge function
void merge(int *arr, int *tmp, int l, int m, int r) {
    int i, j, k;
    i = l; j = m + 1; k = l;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }
    while (i <= m) tmp[k++] = arr[i++];
    for (i = l; i <= r; i++) arr[i] = tmp[i];
}

//recursive steps of merge sort
void mergesort_rec(int *arr, int *tmp, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergesort_rec(arr, tmp, l, m);
        mergesort_rec(arr, tmp, m + 1, r);
        merge(arr, tmp, l, m, r);
    }
}

void merge_sort(int *arr, int n) {
    if (is_sorted_nondecreasing(arr, n)) {
        return;
    }

    if (!arr || n <= 1) return;
    int *tmp = (int *)malloc((size_t)n * sizeof(int));
    if (!tmp) return;
    //on copie le contenu dans tmp pour la fonction merge
    copy_array(arr, tmp, n); 
    mergesort_rec(arr, tmp, 0, n - 1);
    free(tmp);
}

int partition(int *arr, int l, int r) {
    int pivot = arr[r]; //dernier élément comme pivot
    int i = (l - 1);
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap_int(&arr[i], &arr[j]);
        }
    }
    swap_int(&arr[i + 1], &arr[r]);
    return (i + 1);
}


// Fonction récursive pour le tri rapide
void quick_sort_rec(int *arr, int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);
        quick_sort_rec(arr, l, pi - 1);
        quick_sort_rec(arr, pi + 1, r);
    }
}


// Fonction principale du tri rapide (diviser pour régner)
void quick_sort(int *arr, int n) {
    if (is_sorted_nondecreasing(arr, n)) {
        return;
    }
    
    if (!arr || n <= 1) return;
    quick_sort_rec(arr, 0, n - 1);
}