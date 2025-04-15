#include <stdio.h>
#include <stdlib.h>

//Questão1

typedef struct pessoa
{
  char nome[50];
  int idade;
  float altura;
}; 

int main() {
 struct pessoa pessoa;

   printf("Digite o nome: ");
   scanf("%50s", pessoa.nome);

   printf("Digite a idade: ");
   scanf("%d", &pessoa.idade);

   printf("Digite a altura: ");
   scanf("%f", &pessoa.altura);

   printf("Nome: %s\n", pessoa.nome);
   printf("Idade: %d anos\n", pessoa.idade);
   printf("Altura: %.2f metros\n", pessoa.altura);

   return 0;

}
