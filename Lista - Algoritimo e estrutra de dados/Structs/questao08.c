#include <stdio.h>

//Questão 08
struct Retangulo {
    float base;
    float altura;
};

float calcularArea(struct Retangulo ret) {
    return ret.base * ret.altura;
}

float calcularPerimetro(struct Retangulo ret) {
    return 2 * (ret.base + ret.altura);
}

int main() {
    struct Retangulo retangulo1;

    printf("Digite a base do retangulo: ");
    scanf("%f", &retangulo1.base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &retangulo1.altura);

    float area = calcularArea(retangulo1);
    float perimetro = calcularPerimetro(retangulo1);

    printf("Área do retangulo: %.2f\n", area);
    printf("Perímetro do retangulo: %.2f\n", perimetro);

    return 0;
}