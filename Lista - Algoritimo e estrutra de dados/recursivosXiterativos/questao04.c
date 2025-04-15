#include <stdio.h>

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + produto(a, b - 1);
    } else { 
        return -produto(a, -b);
    }
}

int main() {
    int num1 = 5, num2 = 3;

    printf("Produto de %d e %d: %d\n", num1, num2, produto(num1, num2));

    return 0;
}