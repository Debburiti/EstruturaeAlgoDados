#include <stdio.h>

//questão 3

struct Produto {
    char nome[31];
    int codigo;
    float preco;
};

void exibirProduto(struct Produto produto) {
    printf("\n");
    printf("Nome: %s\n", produto.nome);
    printf("Código: %d\n", produto.codigo);
    printf("Preco: R$ %.2f\n", produto.preco);
}

int main() {

    struct Produto Produto1;

    printf("Digite o nome do produto: ");
    scanf(" %30[^\n]", Produto1.nome);

    printf("Digite o codigo do produto: ");
    scanf("%d", &Produto1.codigo);

    printf("Digite o preco do produto: ");
    scanf("%f", &Produto1.preco);

    exibirProduto(Produto1);

    return 0;
}