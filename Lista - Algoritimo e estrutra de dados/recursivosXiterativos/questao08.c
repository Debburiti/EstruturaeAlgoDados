#include <stdio.h>

int maior_elemento_iterativo(int vet[], int n) {
    int maior = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int vetor[] = {3, 7, 1, 9, 4, 9};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("%d\n", maior_elemento_iterativo(vetor, tamanho));

    return 0;
}