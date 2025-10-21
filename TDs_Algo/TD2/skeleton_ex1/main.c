#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "search.h"
#include "utils.h"

int main(void) {
    int n = 10000;

    int *sorted_array = (int*)malloc(n * sizeof(int));
    int *unsorted_array = (int*)malloc(n * sizeof(int));

    if (sorted_array == NULL || unsorted_array == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }
    
    //remplissage du tableau trié
    for (int i = 0; i < n; i++) {
        sorted_array[i] = i * 2;
    }
    
    //remplissage du tableau non trié
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        unsorted_array[i] = rand() % (n * 2);
    }

    int target = n; 
    printf("Taille des tableaux : %d éléments. Cible recherchée : %d.\n", n, target);

    clock_t start, end;
    double cpu_time_used;
    int index_found;

    
    //On vérifie si le tableau est trié.
    if (is_sorted_nondecreasing(unsorted_array, n)) {
        printf("Le tableau est trié. Comparaison des algorithmes pour tableaux triés :\n");
        
        clock_t start, end;
        double time_jump, time_binary;
        int index_found;

        //Jump Search 
        start = clock();
        index_found = jump_search(unsorted_array, n, target);
        end = clock();
        time_jump = ((double) (end - start)) / CLOCKS_PER_SEC;
        
        if (index_found != -1) {
            printf("Recherche jump: cible trouvée à l'index %d en %f secondes.\n", index_found, time_jump);
        } else {
            printf("Recherche jump: cible non trouvée en %f secondes.\n", time_jump);
        }

        //Binary Search
        start = clock();
        index_found = binary_search(unsorted_array, n, target);
        end = clock();
        time_binary = ((double) (end - start)) / CLOCKS_PER_SEC;

        if (index_found != -1) {
            printf("Recherche Binaire: cible trouvée à l'index %d en %f secondes.\n", index_found, time_binary);
        } else {
            printf("Recherche Binaire: cible non trouvée en %f secondes.\n", time_binary);
        }
    } else {
        printf("Le tableau n'est pas trié. On fait une recherche linéaire.\n");
        
        start = clock();
        index_found = linear_search(unsorted_array, n, target); 
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        
        if (index_found != -1) {
            printf("Résultat: cible trouvée à l'index %d en %f secondes.\n", index_found, cpu_time_used);
        } else {
            printf("Résultat: cible non trouvée en %f secondes.\n", cpu_time_used);
        }
    }


    //             Question 3 - Comparaison des 3 algorithmes    
    
    printf("Comparaison des temps d'exécution sur le tableau trié :\n");

    //Recherche Linéaire
    start = clock();
    index_found = linear_search(sorted_array, n, target);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Recherche Linéaire: trouvé à l'index %d en %f secondes.\n", index_found, cpu_time_used);

    //Recherche jump
    start = clock();
    index_found = jump_search(sorted_array, n, target);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Recherche jump: trouvé à l'index %d en %f secondes.\n", index_found, cpu_time_used);

    //Recherche Binaire
    start = clock();
    index_found = binary_search(sorted_array, n, target);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Recherche Binaire: trouvé à l'index %d en %f secondes.\n", index_found, cpu_time_used);


    free(sorted_array);
    free(unsorted_array);
    return 0;
}
