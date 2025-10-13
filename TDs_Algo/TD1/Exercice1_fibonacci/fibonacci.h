#ifndef FIBONACCI_H
#define FIBONACCI_H

//Calcule du n-ième terme de la suite de Fibonacci en utilisant une approche récursive naïve.
//Complexité: O(2^n), lent.
long long fib_naive(int n);


//Calcule du n-ième terme de la suite de Fibonacci en utilisant la programmation dynamique.
//Complexité: O(n), plus rapide.
long long fib_dynamique(int n, long long memo[]);

#endif
