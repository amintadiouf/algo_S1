# TD3 - Algorithmique : Arbres et Graphes

Ce dépôt contient les solutions en C pour le **TD3 d'Algorithmique et Structure de Données**. Le projet a été réalisé par l'équipe : **Hadil ABAHMANE**, **Oumnia ASMAR**, **Aminta DIOUF** & **Arij FELLAH**.

Le TD est divisé en deux exercices principaux :
1.  **The Infinite Library** : Un problème résolu avec des Arbres (Arbre AVL).
2.  **Aladdin's Magic Kingdom** : Un problème résolu avec des Graphes (DFS et BFS).

## Structure du Dépôt

Le projet est organisé comme suit :

```
.
├── Graphs/
│   ├── Aladdin-Magic-Kingdom/  (Dossier des tests pour le problème des Graphes)
│   ├── mes_tests/              (Nos sorties pour le problème des Graphes)
│   └── td3_graph.c             (Code source pour le problème des Graphes)
│   └── README.md   
│
├── Trees/
│   ├── Infinite-Library/       (Dossier des tests pour le problème des Arbres)
│   ├── mes_tests/              (Nos sorties pour le problème des Arbres)
│   └── td3_tree.c              (Code source pour le problème des Arbres)
│   └── README.md    
│
└── README.md                   (Ce fichier)
```

---

## Exercice 1 : The Infinite Library (Arbres)

### Le Problème

Le but est de créer un système pour une bibliothèque infinie qui permet **l'insertion rapide** et la **recherche efficace** de livres. Pour cela, nous avons implémenté un **Arbre AVL**, garantissant des opérations en temps logarithmique (`O(log n)`).

### Compilation

Pour compiler le programme, placez-vous à la racine du dossier `TD3` et exécutez :

```bash
gcc Trees/td3_tree.c -o infinite_library
```

### Exécution et Validation des Tests

Les commandes suivantes, exécutées depuis la racine, permettent de tester notre programme et de valider les sorties.

**Test 01**
```bash
./infinite_library < 'Trees/Infinite-Library/test01.txt' > 'Trees/mes_tests/ma_sortie_test01.txt'
```

```bash
diff 'Trees/Infinite-Library/test01-output.txt' 'Trees/mes_tests/ma_sortie_test01.txt'
```
*(... Répétez pour les tests de 02 à 10 comme dans votre README original ...)*

**Test 10**
```bash
./infinite_library < 'Trees/Infinite-Library/test10.txt' > 'Trees/mes_tests/ma_sortie_test10.txt'
```

```bash
diff 'Trees/Infinite-Library/test10-output.txt' 'Trees/mes_tests/ma_sortie_test10.txt'
```

---

## Exercice 2 : Aladdin's Magic Kingdom (Graphes)

### Le Problème

Ce problème se divise en deux tâches : **compter les royaumes séparés** (composantes connexes via DFS) et **trouver le plus court chemin** entre deux palais (via BFS).

### Compilation

Pour compiler le programme, placez-vous à la racine du dossier `TD3` et exécutez :

```bash
gcc Graphs/td3_graph.c -o aladdin
```

### Exécution et Validation des Tests

Les commandes suivantes, exécutées depuis la racine, permettent de tester notre programme et de valider les sorties.

**Test 01**
```bash
./aladdin < 'Graphs/Aladdin-Magic-Kingdom/test01.txt' > 'Graphs/mes_tests/ma_sortie_test01.txt'
```

```bash
diff 'Graphs/Aladdin-Magic-Kingdom/test01-output.txt' 'Graphs/mes_tests/ma_sortie_test01.txt'
```
*(... Répétez pour les tests de 02 à 10 comme dans votre README original ...)*

**Test 10**
```bash
./aladdin < 'Graphs/Aladdin-Magic-Kingdom/test10.txt' > 'Graphs/mes_tests/ma_sortie_test10.txt'
```

```bash
diff 'Graphs/Aladdin-Magic-Kingdom/test10-output.txt' 'Graphs/mes_tests/ma_sortie_test10.txt'
```

## Résultats Généraux

Tous les tests pour les deux exercices ont été exécutés avec succès. La commande `diff` n'a retourné **aucune différence** pour l'ensemble des cas de test, ce qui confirme que nos deux programmes produisent les sorties attendues et résolvent correctement les problèmes posés.
