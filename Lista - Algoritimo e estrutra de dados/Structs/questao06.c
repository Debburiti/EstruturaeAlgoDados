#include <stdio.h>
#include <stdlib.h>

//Questão 6
struct Livro {
    char titulo[51];
    char autor[51];
    int ano_publicacao;
};

void exibirLivrosAposAno(struct Livro livros[], int num_livros, int ano_limite) {
    int encontrados = 0;
    for (int i = 0; i < num_livros; i++) {
        if (livros[i].ano_publicacao > ano_limite) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano de Publicacao: %d\n", livros[i].ano_publicacao);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("Nenhum livro publicado apos %d encontrado.\n", ano_limite);
    }
}

int main() {
    int num_livros;

    printf("Digite o numero de livros para cadastrar: ");
    scanf("%d", &num_livros);

    struct Livro *livros = (struct Livro *)malloc(num_livros * sizeof(struct Livro));

    for (int i = 0; i < num_livros; i++) {
        printf("\nLivro %d:\n", i + 1);
        printf("Titulo: ");
        scanf(" %50[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %50[^\n]", livros[i].autor);

        printf("Ano de Publicacao: ");
        scanf("%d", &livros[i].ano_publicacao);

    }

    int ano_limite;
    printf("\nDigite o ano a partir do qual os livros devem ser exibidos: ");
    scanf("%d", &ano_limite);

    exibirLivrosAposAno(livros, num_livros, ano_limite);

    free(livros);
    livros = NULL;

    return 0;
}