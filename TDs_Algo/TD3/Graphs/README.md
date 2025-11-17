# TD3 - Aladdin's Magic Kingdom

Ce dépôt contient la solution en C pour le **TD3-2 : Aladdin's Magic Kingdom**. Le projet a été réalisé par l'équipe: **Hadil ABAHMANE**, **Oumnia ASMAR**, **Aminta DIOUF** & **Arij FELLAH**.

Le problème est divisé en deux tâches principales basées sur la théorie des graphes :
1.  **Compter les Royaumes** : Déterminer le nombre de composantes connexes dans le graphe (en utilisant un parcours en profondeur - DFS).
2.  **Trouver le Plus Court Chemin** : Calculer la distance la plus courte entre deux nœuds dans un graphe non pondéré (en utilisant un parcours en largeur - BFS).

## Structure des Fichiers

Le projet est organisé comme suit. Le code source est dans `td3_graph.c`, les cas de test fournis sont dans `Aladdin-Magic-Kingdom/`, et nos propres sorties générées sont dans `mes_tests/`.

```
.
├── Aladdin-Magic-Kingdom/
│   ├── test01.txt
│   ├── test01-output.txt
│   ├── ... (10 cas de test au total)
│   └── test10-output.txt
│
├── mes_tests/
│   ├── ma_sortie_test01.txt
│   ├── ... (nos 10 fichiers de sortie)
│   └── ma_sortie_test10.txt
│
├── td3_graph.c
└── README.md
```

## Compilation

Pour compiler le programme, utilisez la commande suivante. Cela créera un exécutable nommé `aladdin`.

```bash
gcc td3_graph.c -o aladdin
```

## Exécution et Validation des Tests

Pour valider le programme, nous avons exécuté chaque cas de test fourni et comparé notre sortie avec la sortie attendue. Ci-dessous se trouve la liste complète des commandes utilisées pour chaque test.

Si la commande `diff` n'affiche rien, cela signifie que les fichiers sont identiques et que le test est réussi.

### Test 01
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test01.txt' > 'mes_tests/ma_sortie_test01.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test01-output.txt' 'mes_tests/ma_sortie_test01.txt'
```

### Test 02
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test02.txt' > 'mes_tests/ma_sortie_test02.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test02-output.txt' 'mes_tests/ma_sortie_test02.txt'
```

### Test 03
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test03.txt' > 'mes_tests/ma_sortie_test03.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test03-output.txt' 'mes_tests/ma_sortie_test03.txt'
```

### Test 04
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test04.txt' > 'mes_tests/ma_sortie_test04.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test04-output.txt' 'mes_tests/ma_sortie_test04.txt'
```

### Test 05
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test05.txt' > 'mes_tests/ma_sortie_test05.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test05-output.txt' 'mes_tests/ma_sortie_test05.txt'
```

### Test 06
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test06.txt' > 'mes_tests/ma_sortie_test06.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test06-output.txt' 'mes_tests/ma_sortie_test06.txt'
```

### Test 07
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test07.txt' > 'mes_tests/ma_sortie_test07.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test07-output.txt' 'mes_tests/ma_sortie_test07.txt'
```

### Test 08
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test08.txt' > 'mes_tests/ma_sortie_test08.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test08-output.txt' 'mes_tests/ma_sortie_test08.txt'
```

### Test 09
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test09.txt' > 'mes_tests/ma_sortie_test09.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test09-output.txt' 'mes_tests/ma_sortie_test09.txt'
```

### Test 10
```bash
./aladdin < 'Aladdin-Magic-Kingdom/test10.txt' > 'mes_tests/ma_sortie_test10.txt'
```

```bash
diff 'Aladdin-Magic-Kingdom/test10-output.txt' 'mes_tests/ma_sortie_test10.txt'
```

## Résultats

Tous les tests, de `test01.txt` à `test10.txt`, ont été exécutés avec succès.

La commande `diff` n'a retourné **aucune différence** pour l'ensemble des cas de test, ce qui confirme que le programme produit les sorties attendues et résout correctement le problème posé.
