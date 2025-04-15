#include <stdio.h>
#include <stdlib.h>

//Questão 5

struct Funcionario {
    char nome[51];
    char cargo[31];
    float salario;
};

int main() {
    int n;
    struct Funcionario *funcionarios;

    printf("Digite o numero de funcionarios para cadastrar: ");
    scanf("%d", &n);

    funcionarios = (struct Funcionario *)malloc(n * sizeof(struct Funcionario));

    for (int i = 0; i < n; i++) {
        printf("Nome: ");
        scanf(" %50[^\n]", funcionarios[i].nome);

        printf("Cargo: ");
        scanf(" %30[^\n]", funcionarios[i].cargo);

        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
    }

    for (int i = 0; i < n; i++) {
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario: R$ %.2f\n", funcionarios[i].salario);
    }

    free(funcionarios);
    funcionarios = NULL;

    return 0;
}