#include <stdio.h>

int soma_digitos_iterativo(int n) {
    int soma = 0;
    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main() {
    int numero = 1234;
    printf("%d\n", soma_digitos_iterativo(numero));

    return 0;
}