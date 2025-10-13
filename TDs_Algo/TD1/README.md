# TD1 - Algorithmique et Structure de Données

Ce dépôt contient les solutions pour le **TD1 : Transforming your first algorithm into code**.

Le td est divisé en deux parties principales :
1.  **Fibonacci** : Implémentation et comparaison d'un algorithme naïf (récursif) et d'un algorithme efficace (programmation dynamique).
2.  **Nombres Premiers** : Implémentation et comparaison d'un algorithme naïf et d'un algorithme efficace (Crible d'Ératosthène).

## Structure des Fichiers

Le projet est organisé comme suit :

```
.
├── Exercice1_fibonacci/
│   ├── fibonacci.c
│   └── fibonacci.h
│
├── Exercice2_Nombres_Premiers/
│   ├── nombres_premiers.c
│   └── nombres_premiers.h
│
└── README.md
```

## Compilation et Exécution

### 1. Exercice Fibonacci

**Compilation**

```bash
gcc fibonacci.c -o fibonacci
```

**Exécution**
Lancez le programme avec la commande :

```bash
./fibonacci
```

### 2. Exercice Nombres Premiers

**Compilation**
Ce programme utilise des fonctions de la librairie mathématique, il faut donc ajouter `-lm` à la fin de la commande.

```bash
gcc nombres_premiers.c -o nombres_premiers -lm
```

**Exécution**
Lancez le programme avec la commande :

```bash
./nombres_premiers
```

## Mes Résultats

Voici les résultats que j'ai obtenus sur ma machine.

### Sortie de l'Exercice 1 : Fibonacci

```
Calcul de Fibonacci(45) avec l'algorithme naif
Resultat Naif: 1134903170, Temps: 9.329438 secondes

Calcul de Fibonacci(45) avec la programmation dynamique
Resultat Dynamique: 1134903170, Temps: 0.000003 secondes
```

### Sortie de l'Exercice 2 : Nombres Premiers

```
Comptage des nombres premiers jusqu'a 200000 (naif)
Resultat: 17984 nombres premiers, Temps: 0.035063 secondes

Comptage des nombres premiers jusqu'a 200000 (efficace)
Resultat: 17984 nombres premiers, Temps: 0.001954 secondes
```
