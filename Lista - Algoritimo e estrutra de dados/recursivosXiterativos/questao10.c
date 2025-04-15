#include <stdio.h>

int produto_iterativo(int a, int b) {
    int resultado = 0;
    int i;

    if (b < 0) {
        a = -a;
        b = -b;
    }

    for (i = 0; i < b; i++) {
        resultado += a;
    }

    return resultado;
}

int main() {
    int num1 = 5, num2 = 3;

    printf("Produto de %d e %d (iterativo): %d\n", num1, num2, produto_iterativo(num1, num2));
    
    return 0;
}