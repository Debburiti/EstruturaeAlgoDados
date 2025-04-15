#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;

No* inserir_inicio(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = head;
    return novo;
}

No* inserir_final(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    
    novo->dado = valor;
    novo->prox = NULL; // Novo nó sempre aponta para NULL

    if (head == NULL) {
        return novo; // Se a lista estiver vazia, o novo nó é a cabeça
    }

    No* atual = head;
    while (atual->prox != NULL) {
        atual = atual->prox; // Percorre até o último nó
    }
    atual->prox = novo; // O último nó agora aponta para o novo nó
    return head;
}

void imprimir_lista(No* head) {
    No* atual = head;
    while (atual != NULL) {
        printf("%d.\n", atual->dado);
        atual = atual->prox;
    }
    printf("NULL \n");
}

void liberar_lista(No* head) {
    No* atual = head;
    No* proximo;
    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}

int main() {
    No* lista = NULL;

    // Inserindo no início
    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 30);

    printf("Lista após inserções no início:\n");
    imprimir_lista(lista);

    // Inserindo no final
    lista = inserir_final(lista, 40);
    lista = inserir_final(lista, 50);

    printf("\nLista após inserções no final:\n");
    imprimir_lista(lista);

    // Liberando a memória da lista
    liberar_lista(lista);
    lista = NULL; // Boa prática

    return 0;
}