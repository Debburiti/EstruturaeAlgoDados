#include <stdio.h>

void contagem_regressiva_iterativo(int n) {
    for (int i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero = 5;
    printf("Contagem regressiva %d: ", numero);
    contagem_regressiva_iterativo(numero);

    return 0;
}