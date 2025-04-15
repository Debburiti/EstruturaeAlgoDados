#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Questão 07
struct Contato {
    char nome[51];
    char telefone[16];
};

void adicionarContato(struct Contato agenda[], int *numContatos) {
        printf("Nome: ");
        scanf(" %50[^\n]", agenda[*numContatos].nome);

        printf("Telefone: ");
        scanf(" %15[^\n]", agenda[*numContatos].telefone);

        (*numContatos)++;

}

void buscarContato(struct Contato agenda[], int numContatos, char nomeBusca[]) {
    int encontrado = 0;
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nomeBusca) == 0) {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Telefone: %s\n", agenda[i].telefone);
            encontrado = 1;
            break;
        }
    }
}

int main() {
    struct Contato armazenamento[100]; 
    int numContatos = 0;
    int opcao;
    char nomeBusca[51];

    do {
        printf("1. Adicionar Contato\n");
        printf("2. Buscar Contato\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(armazenamento, &numContatos);
                break;
            case 2:
                printf("Digite o nome do contato a ser buscado: ");
                scanf(" %50[^\n]", nomeBusca);
                buscarContato(armazenamento, numContatos, nomeBusca);
                break;
            case 0:
                printf("Saindo da agenda.\n");
                break;
            default:
                printf("Opcao inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}