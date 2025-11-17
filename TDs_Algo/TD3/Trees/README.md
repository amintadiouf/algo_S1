# TD3 - The Infinite Library

Ce dépôt contient la solution en C pour le **TD3-1 : The Infinite Library**. Le projet a été réalisé par l'équipe: **Hadil ABAHMANE**, **Oumnia ASMAR**, **Aminta DIOUF** & **Arij FELLAH**.

## Le Problème

Le but est de créer un système pour une bibliothèque infinie. Ce système doit permettre :
1.  **L'insertion rapide** de nouveaux livres.
2.  **La recherche efficace** d'un livre par son ID.

Pour résoudre ce problème, nous avons implémenté un **Arbre AVL**, qui est un arbre binaire de recherche auto-équilibré. Cette structure garantit que les opérations d'insertion et de recherche se font en temps logarithmique (`O(log n)`), ce qui est crucial pour gérer un grand nombre de livres.

## Structure des Fichiers

```
.
├── Infinite-Library/
│   ├── test01.txt
│   ├── test01-output.txt
│   ├── ... (10 cas de test au total)
│   └── test10-output.txt
│
├── mes_tests/
│   ├── ... (nos 10 fichiers de sortie seront créés ici)
│
├── td3_tree.c
└── README.md
```

## Compilation

Pour compiler le programme, utilisez la commande suivante. Cela créera un exécutable nommé `infinite_library`.

```bash
gcc td3_tree.c -o infinite_library
```

## Exécution et Validation des Tests

Pour valider le programme, nous avons exécuté chaque cas de test fourni et comparé notre sortie avec la sortie attendue. Ci-dessous se trouve la liste complète des commandes utilisées pour chaque test.

Si la commande `diff` n'affiche rien, cela signifie que les fichiers sont identiques et que le test est réussi.

### Test 01
```bash
./infinite_library < 'Infinite-Library/test01.txt' > 'mes_tests/ma_sortie_test01.txt'
```

```bash
diff 'Infinite-Library/test01-output.txt' 'mes_tests/ma_sortie_test01.txt'
```

### Test 02
```bash
./infinite_library < 'Infinite-Library/test02.txt' > 'mes_tests/ma_sortie_test02.txt'
```

```bash
diff 'Infinite-Library/test02-output.txt' 'mes_tests/ma_sortie_test02.txt'
```

### Test 03
```bash
./infinite_library < 'Infinite-Library/test03.txt' > 'mes_tests/ma_sortie_test03.txt'
```

```bash
diff 'Infinite-Library/test03-output.txt' 'mes_tests/ma_sortie_test03.txt'
```

### Test 04
```bash
./infinite_library < 'Infinite-Library/test04.txt' > 'mes_tests/ma_sortie_test04.txt'
```

```bash
diff 'Infinite-Library/test04-output.txt' 'mes_tests/ma_sortie_test04.txt'
```

### Test 05
```bash
./infinite_library < 'Infinite-Library/test05.txt' > 'mes_tests/ma_sortie_test05.txt'
```

```bash
diff 'Infinite-Library/test05-output.txt' 'mes_tests/ma_sortie_test05.txt'
```

### Test 06
```bash
./infinite_library < 'Infinite-Library/test06.txt' > 'mes_tests/ma_sortie_test06.txt'
```

```bash
diff 'Infinite-Library/test06-output.txt' 'mes_tests/ma_sortie_test06.txt'
```

### Test 07
```bash
./infinite_library < 'Infinite-Library/test07.txt' > 'mes_tests/ma_sortie_test07.txt'
```

```bash
diff 'Infinite-Library/test07-output.txt' 'mes_tests/ma_sortie_test07.txt'
```

### Test 08
```bash
./infinite_library < 'Infinite-Library/test08.txt' > 'mes_tests/ma_sortie_test08.txt'
```

```bash
diff 'Infinite-Library/test08-output.txt' 'mes_tests/ma_sortie_test08.txt'
```

### Test 09
```bash
./infinite_library < 'Infinite-Library/test09.txt' > 'mes_tests/ma_sortie_test09.txt'
```

```bash
diff 'Infinite-Library/test09-output.txt' 'mes_tests/ma_sortie_test09.txt'
```

### Test 10
```bash
./infinite_library < 'Infinite-Library/test10.txt' > 'mes_tests/ma_sortie_test10.txt'
```

```bash
diff 'Infinite-Library/test10-output.txt' 'mes_tests/ma_sortie_test10.txt'
```

## Résultats

Tous les tests, de `test01.txt` à `test10.txt`, ont été exécutés avec succès.

La commande `diff` n'a retourné **aucune différence** pour l'ensemble des cas de test, ce qui confirme que le programme produit les sorties attendues et résout correctement le problème posé.
