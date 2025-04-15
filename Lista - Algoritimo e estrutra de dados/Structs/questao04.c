#include <stdio.h>
#include <stdlib.h>
//Qiestão 4
struct Carro {
    char modelo[31];
    int ano;
    float preco;
};

int main() {
    struct Carro *carroPtr;

    carroPtr = (struct Carro *)malloc(sizeof(struct Carro));

    printf("Digite o modelo do carro : ");
    scanf(" %30[^\n]", carroPtr->modelo);

    printf("Digite o ano do carro: ");
    scanf("%d", &carroPtr->ano);

    printf("Digite o preço do carro: ");
    scanf("%f", &carroPtr->preco);

    printf("Modelo: %s\n", carroPtr->modelo);
    printf("Ano: %d\n", carroPtr->ano);
    printf("Preco: R$ %.2f\n", carroPtr->preco);

    free(carroPtr);
    carroPtr = NULL; 
    return 0;
}