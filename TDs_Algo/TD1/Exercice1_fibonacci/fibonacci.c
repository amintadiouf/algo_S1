#include <stdio.h>
#include <time.h>
#include "fibonacci.h"

//fibonacci naïf
long long fib_naive(int n) {
    if (n <= 1) {
        return n;
    }
    return fib_naive(n - 1) + fib_naive(n - 2);
}

//fibonacci avec la programmation dynamique
long long fib_dynamique(int n, long long memo[]) {
    if (n <= 1) {
        return n;
    }
    //Si la valeur a déjà été calculée, on la retourne directement
    if (memo[n] != -1) {
        return memo[n];
    }
    //Sinon, on la calcule, la stocke et la retourne
    memo[n] = fib_dynamique(n - 1, memo) + fib_dynamique(n - 2, memo);
    return memo[n];
}

int main() {
    //Valeur choisie pour voir une vraie différence de temps
    int n = 45; 

    clock_t start, end;
    double cpu_time_used;
    long long resultat;

    //Test pour le naïf
    printf("Calcul de Fibonacci(%d) avec l'algorithme naif\n", n);
    start = clock();
    resultat = fib_naive(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Resultat Naif: %lld, Temps: %f secondes\n", resultat, cpu_time_used);

    printf("\n");


    //Test dynamique
    //Initialisation du tableau de mémoïsation avec -1 (valeur non calculée)
    long long memo[n + 1];
    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    printf("Calcul de Fibonacci(%d) avec la programmation dynamique\n", n);
    start = clock();
    resultat = fib_dynamique(n, memo);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Resultat Dynamique: %lld, Temps: %f secondes\n", resultat, cpu_time_used);

    return 0;
}
