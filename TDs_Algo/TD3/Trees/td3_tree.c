/*
 * td3-1: The Infinite Library
 * Autrices :
 * - Hadil ABAHMANE
 * - Oumnia ASMAR
 * - Aminta DIOUF
 * - Arij FELLAH
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}

Node* newNode(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; 
    return node;
}


Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    // Rotation
    x->right = y;
    y->left = T2;

    // Mettre à jour les hauteurs
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // La nouvelle racine est x
    return x; 
}

Node *leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    // Rotation
    y->left = x;
    x->right = T2;

    // Mettre à jour les hauteurs
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // La nouvelle racine est y
    return y; 
}

int getBalance(Node *N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}


Node* insert(Node* node, int key) {
    // Insertion classique BST
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else 
        return node; // pas de doublon

    // Mise à jour de la hauteur
    node->height = 1 + max(height(node->left), height(node->right));

    // Calcul du facteur d’équilibre
    int balance = getBalance(node);

    // Cas 4 rotations
    // Gauche-Gauche
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);

    // Cas Droite-Droite
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);

    // Cas Gauche-Droite
    if (balance > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Cas Droite-Gauche
    if (balance < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // Aucun déséquilibre
    return node;
}

int search(Node* root, int key) {
    if (root == NULL)
        return 0; 

    if (key == root->key)
        return 1; 
    else if (key < root->key)
        return search(root->left, key);
    else
        return search(root->right, key);
}


void freeTree(Node* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {
    Node *root = NULL;
    int n_books, n_queries, book_id;

    // Lit le nombre de livres à insérer
    scanf("%d", &n_books);

    // Lit chaque ID de livre et l'insère dans l'arbre
    for (int i = 0; i < n_books; i++) {
        scanf("%d", &book_id);
        root = insert(root, book_id);
    }

    // Lit le nombre de requêtes de recherche
    scanf("%d", &n_queries);

    // Lit chaque requête, cherche l'ID et affiche le résultat au format demandé
    for (int i = 0; i < n_queries; i++) {
        scanf("%d", &book_id);
        if (search(root, book_id)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    freeTree(root);
    
    return 0;
}