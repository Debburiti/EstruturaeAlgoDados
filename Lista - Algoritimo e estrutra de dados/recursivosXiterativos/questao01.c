#include <stdio.h>

int contar_digitos(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + contar_digitos(n / 10);
    }
}

int main() {
    int num1 = 12345;
    int num2 = 7;

    printf("Numero de digitos de %d: %d\n", num1, contar_digitos(num1));
    printf("Numero de digitos de %d: %d\n", num2, contar_digitos(num2));

    return 0;
}