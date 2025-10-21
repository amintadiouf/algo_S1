#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"

//macro pour simplifier l'appel des tests de tri
#define RUN_SORT_TEST(sort_func, arr, n, original_arr, algo_name) { \
    printf("%s (", algo_name); \
    copy_array(original_arr, arr, n); \
    clock_t start = clock(); \
    sort_func(arr, n); \
    clock_t end = clock(); \
    double time_used = ((double) (end - start)) / CLOCKS_PER_SEC; \
    printf("Temps: %f secondes) - Tableau trié : %s\n", time_used, is_sorted_nondecreasing(arr, n) ? "Oui" : "Non"); \
}

int main(void) {
    int n = 50000;

    int *original_array = (int*)malloc(n * sizeof(int));
    int *working_array = (int*)malloc(n * sizeof(int));

    if (original_array == NULL || working_array == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        original_array[i] = rand() % 100000;
    }
    
    printf("Comparaison des algorithmes de tri sur un tableau de %d éléments\n", n);
    
    // Tris O(n^2)
    RUN_SORT_TEST(selection_sort, working_array, n, original_array, "Tri par Sélection");
    RUN_SORT_TEST(insertion_sort, working_array, n, original_array, "Tri par Insertion");
    RUN_SORT_TEST(bubble_sort,    working_array, n, original_array, "Tri à Bulles");

    printf("\n");

    // Tris O(n log n)
    RUN_SORT_TEST(merge_sort, working_array, n, original_array, "Tri Fusion");
    RUN_SORT_TEST(quick_sort, working_array, n, original_array, "Tri Rapide");
    
    free(original_array);
    free(working_array);

    return 0;
}
