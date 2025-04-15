#include <stdio.h>

//Questão 2 

struct Aluno {
    char nome[51];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[5];
    float soma_notas = 0.0;

    printf("Digite os dados dos 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: ");
        scanf(" %50[^\n]", alunos[i].nome); 

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        soma_notas += alunos[i].nota;   
    }
    
    float media = soma_notas / 5.0;

    printf("Media: %.2f\n", media);

    return 0;
}