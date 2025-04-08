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

Node* encontrarMinimo(struct Node* node) {

while (node->esquerda != NULL)
node = node->esquerda;
return node;
}

Node* remover(struct Node* raiz, int valor) {
if (raiz == NULL)
return raiz; 

if (valor < raiz->valor)
raiz->esquerda = remover(raiz->esquerda, valor);

else if (valor > raiz->valor)
raiz->direita = remover(raiz->direita, valor);
else {

if (raiz->esquerda == NULL && raiz->direita == NULL) {
free(raiz);
return NULL;
}

else if (raiz->esquerda == NULL) {
struct Node* temp = raiz->direita;
free(raiz);
return temp;
} else if (raiz->direita == NULL) {
struct Node* temp = raiz->esquerda;
free(raiz);
return temp;
}

Node* temp = encontrarMinimo(raiz->direita);

raiz->valor = temp->valor;

raiz->direita = remover(raiz->direita, temp->valor);
}

return raiz;
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
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    raiz = remover(raiz, 20);
    raiz = remover(raiz, 30);  
    raiz = remover(raiz, 50);  

    printf("Arvore em ordem crescente após as remoçoes: ");
    emOrdem(raiz);  
    printf("\n");

    return 0;
}


