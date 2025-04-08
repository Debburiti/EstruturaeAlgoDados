#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
int valor;
struct Node* esquerda;
struct Node* direita;
} Node;

Node* novoNo(int valor) {
Node* node = (struct Node*) malloc(sizeof(struct Node));
node->valor = valor;
node->esquerda = node->direita = NULL;
return node;
}

struct Node* inserir(struct Node* raiz, int valor) {
if (raiz == NULL)
return novoNo(valor);

if (valor < raiz->valor)
raiz->esquerda = inserir(raiz->esquerda, valor);

else if (valor > raiz->valor)
raiz->direita = inserir(raiz->direita, valor);

return raiz;
}

int buscarNo(Node* raiz, int valor) {
    if (raiz == NULL) {
        return 0;  
    }

    if (raiz->valor == valor) {
        return 1;  
    }

    if (valor < raiz->valor) {
        return buscarNo(raiz->esquerda, valor); 
    } else {
        return buscarNo(raiz->direita, valor);  
    }
}

int main() {
    Node* raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    int valores[] = {60, 25, 40};
    for (int i = 0; i < 3; i++) {
        int valor = valores[i];
        if (buscarNo(raiz, valor)) {
            printf("O valor %d foi encontrado na arvore.\n", valor);
        } else {
            printf("O valor %d nao foi encontrado na arvore.\n", valor);
        }
    }

    return 0;
}
