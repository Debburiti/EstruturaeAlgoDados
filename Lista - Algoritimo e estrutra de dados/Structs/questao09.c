#include <stdio.h>
#include <stdlib.h>

struct Paciente {
    char nome[51];
    int idade;
    char diagnostico[101];
};

void exibirPacientesAcimaDe60(struct Paciente pacientes[], int numPacientes) {
    int encontrados = 0;
    for (int i = 0; i < numPacientes; i++) {
        if (pacientes[i].idade > 60) {
            printf("Nome: %s\n", pacientes[i].nome);
            printf("Idade: %d\n", pacientes[i].idade);
            printf("Diagnostico: %s\n", pacientes[i].diagnostico);
            encontrados++;
        }
        if (encontrados == 0) {
            printf("Nenhum paciente acima de 60 anos encontrado.\n");
        }
    }
}

int main() {
    int numPacientes;

    printf("Digite o número de pacientes a serem cadastrados: ");
    scanf("%d", &numPacientes);

    struct Paciente *pacientes = (struct Paciente *)malloc(numPacientes * sizeof(struct Paciente));

    for (int i = 0; i < numPacientes; i++) {
        printf("Nome: ");
        scanf(" %50", pacientes[i].nome);

        printf("Idade: ");
        scanf("%d", &pacientes[i].idade);

        printf("Diagnostico: ");
        scanf(" %100", pacientes[i].diagnostico);
    }

    exibirPacientesAcimaDe60(pacientes, numPacientes);

    free(pacientes);
    pacientes = NULL;

    return 0;
}