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


void emOrdem(Node* raiz) {
if (raiz != NULL) {
emOrdem(raiz->esquerda);
printf("%d\n", raiz->valor);
emOrdem(raiz->direita);
}
}

int main() {
     Node* raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    printf("Em ordem crescente:\n ");
    emOrdem(raiz);
    printf("\n");

    return 0;
}