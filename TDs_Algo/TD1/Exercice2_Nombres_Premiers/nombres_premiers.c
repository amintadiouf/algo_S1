#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include "nombres_premiers.h"

//Algorithme Naïf

// Fonction auxiliaire pour vérifier si un nombre est premier
bool est_premier(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int compte_premiers_naif(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (est_premier(i)) {
            count++;
        }
    }
    return count;
}


//algorithme Efficace (Crible d'Ératosthène)
int compte_premiers_efficace(int n) {
    if (n <= 2) return 0;

    //on crée un tableau de booléens pour marquer les nombres
    bool* est_prime = (bool*) malloc((n) * sizeof(bool));
    for (int i = 0; i < n; i++) {
        est_prime[i] = true;
    }

    est_prime[0] = est_prime[1] = false;

    for (int p = 2; p * p < n; p++) {
        //si p n'a pas été barré, c'est un nombre premier
        if (est_prime[p] == true) {
            //on barre tous ses multiples
            for (int i = p * p; i < n; i += p) {
                est_prime[i] = false;
            }
        }
    }

    //on compte les nombres premiers restants
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (est_prime[i]) {
            count++;
        }
    }

    free(est_prime);
    return count;
}


int main() {
    int n = 200000;

    clock_t start, end;
    double cpu_time_used;
    int resultat;

    //test de l'algorithme naïf
    printf("Comptage des nombres premiers jusqu'a %d (naif)\n", n);
    start = clock();
    resultat = compte_premiers_naif(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Resultat: %d nombres premiers, Temps: %f secondes\n", resultat, cpu_time_used);
    printf("\n");


    //test de l'algorithme efficace
    printf("Comptage des nombres premiers jusqu'a %d (efficace)\n", n);
    start = clock();
    resultat = compte_premiers_efficace(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Resultat: %d nombres premiers, Temps: %f secondes\n", resultat, cpu_time_used);

    return 0;
}
