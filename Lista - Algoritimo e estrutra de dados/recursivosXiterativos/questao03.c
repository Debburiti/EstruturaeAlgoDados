#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int numero = 1234;
    int soma = soma_digitos(numero);
    printf("Soma dos digitos:%d", soma);
}