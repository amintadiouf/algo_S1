# TD2 - Algorithmique et Structure de Données : Algorithmes de Recherche et de Tri

> **<font color="red">NOTE IMPORTANTE SUR L'IMPLÉMENTATION</font>**
>
> **Une différence clé d'approche a été suivie pour les deux exercices, conformément aux consignes :**
> -   **Exercice 1 (Recherche)** : La logique de décision (vérifier si le tableau est trié avant de choisir un algorithme) est placée dans le programme principal **`main.c`**.
> -   **Exercice 2 (Tri)** : La vérification (si le tableau est déjà trié) est effectuée au début de **chaque fonction de tri** dans le fichier `sort.c`.

Ce dépôt contient les solutions complètes pour les deux parties du **TD2 : Implementing searching and sorting algorithms**.

---

## Partie 1 : Algorithmes de Recherche

L'objectif de cette première partie est d'implémenter et de comparer trois algorithmes de recherche :
1.  **Recherche Linéaire** : Un algorithme universel qui fonctionne sur tous les tableaux.
2.  **Recherche par Saut (Jump Search)** : Un algorithme efficace pour les tableaux triés.
3.  **Recherche Binaire (Binary Search)** : L'algorithme le plus performant pour les tableaux triés.

### Structure des Fichiers (Exercice 1)

```
Exercice1_Recherche/
├── main.c
├── search.c
├── search.h
├── utils.c
└── utils.h
```

### Compilation et Exécution (Exercice 1)

**Compilation**
Ce programme utilise des fonctions de la librairie mathématique (`sqrt`), il faut donc ajouter `-lm` à la fin de la commande.

```bash
gcc main.c search.c utils.c -o programme_recherche -lm
```

**Exécution**

```bash
./programme_recherche
```

### Mes Résultats (Exercice 1)

Voici les résultats obtenus. Le programme teste d'abord un tableau non trié, puis compare les trois algorithmes sur un tableau trié.

**Sortie du Programme**
```
Taille des tableaux : 10000 éléments. Cible recherchée : 10000.
Le tableau n'est pas trié. On fait une recherche linéaire.
Résultat: cible non trouvée en 0.000026 secondes.
Comparaison des temps d'exécution sur le tableau trié :
Recherche Linéaire: trouvé à l'index 5000 en 0.000013 secondes.
Recherche jump: trouvé à l'index 5000 en 0.000003 secondes.
Recherche Binaire: trouvé à l'index 5000 en 0.000001 secondes.
```

---

## Partie 2 : Algorithmes de Tri

Le but de ce second exercice est d'implémenter et de comparer les performances de cinq algorithmes de tri :
1.  **Tris simples (itératifs)** : Tri par sélection, tri par insertion et tri à bulles.
2.  **Tris complexes (récursifs)** : Tri fusion (Merge Sort) et tri rapide (Quick Sort).

### Structure des Fichiers (Exercice 2)

```
Exercice2_Tri/
├── main.c
├── sort.c
├── sort.h
├── utils.c
└── utils.h
```

### Compilation et Exécution (Exercice 2)

**Compilation**

```bash
gcc main.c sort.c utils.c -o programme_tri
```

**Exécution**

```bash
./programme_tri
```

### Mes Résultats (Exercice 2)

Le programme compare les temps d'exécution de chaque algorithme sur un tableau de 50 000 éléments aléatoires.

**Sortie du Programme**
```
Comparaison des algorithmes de tri sur un tableau de 50000 éléments
Tri par Sélection (Temps: 2.808840 secondes) - Tableau trié : Oui
Tri par Insertion (Temps: 1.578894 secondes) - Tableau trié : Oui
Tri à Bulles (Temps: 7.789048 secondes) - Tableau trié : Oui

Tri Fusion (Temps: 0.008464 secondes) - Tableau trié : Oui
Tri Rapide (Temps: 0.007529 secondes) - Tableau trié : Oui
```

### Analyse des Résultats (Exercice 2)

Les résultats montrent une différence de performance spectaculaire entre les deux familles d'algorithmes :
-   Les tris en **O(n²)** (Sélection, Insertion, Bulles) prennent plusieurs secondes.
-   Les tris en **O(n log n)** (Fusion, Rapide) s'exécutent en quelques millisecondes seulement, démontrant leur efficacité sur de grands volumes de données.
