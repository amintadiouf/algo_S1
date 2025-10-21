#include "utils.h"
#include <stdbool.h>
#include <stddef.h> 

//vérifie si un tableau d'entiers est trié par ordre non décroissant (croissant ou égal)
bool is_sorted_nondecreasing(int *arr, int n) {
    if (arr == NULL || n <= 1) {
        return true;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

//retourne le plus petit de deux entiers
int min_int(int a, int b) {
    return (a < b) ? a : b;
}