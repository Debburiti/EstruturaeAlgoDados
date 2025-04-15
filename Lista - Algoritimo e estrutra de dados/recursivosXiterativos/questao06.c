#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(const char *str, int inicio, int fim) {
    while (inicio < fim && !isalnum(str[inicio])) {
        inicio++;
    }
    while (inicio < fim && !isalnum(str[fim])) {
        fim--;
    }

    if (inicio >= fim) {
        return 1; 
    }

    if (tolower(str[inicio]) == tolower(str[fim])) {
        return palindromo(str, inicio + 1, fim - 1);
    } else {
        return 0; 
    }
}

int palindromo_(const char *str) {
    int comprimento = strlen(str);
    return palindromo(str, 0, comprimento - 1);
}

int main() {
    char string1[] = "aula";
    char string2[] = "Cesar";

    printf("%s: %s\n", string1, palindromo_(string1) ? "Sim" : "Nao");
    printf("%s: %s\n", string2, palindromo_(string2) ? "Sim" : "Nao");

    return 0;
}
