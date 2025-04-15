#include <stdio.h>

void contagem_regressiva(int n) {
    if (n >= 0) {
        printf("%d ", n);
        contagem_regressiva(n - 1);
    }
    printf("\n");
}

int main() {
    int numero = 5;
    printf("Contagem regressiva de %d: ", numero);
    contagem_regressiva_recursivo(numero);

    return 0;
}