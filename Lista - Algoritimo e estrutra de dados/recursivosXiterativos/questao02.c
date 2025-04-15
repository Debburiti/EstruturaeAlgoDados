#include <stdio.h>

int maior_elemento(int vet[], int n) {
    if (n == 1) {
        return vet[0];
    } else {
        int maior_resto = maior_elemento(vet, n - 1);
        if (vet[n - 1] > maior_resto) {
            return vet[n - 1];
        } else {
            return maior_resto;
        }
    }
}

int main() {
    int vetor[] = {2, 4, 6, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("%d\n", maior_elemento(vetor, tamanho));

    return 0;
}