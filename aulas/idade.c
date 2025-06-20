#include <stdio.h>

int main()
{
    // Variáveis
    int idade;

    // Escreva
    printf("Escreva a idade: ");

    // Leia
    scanf("%d", &idade);

    // Se
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
        // FimSenão
    }
    // FimSe

    // Fim
    return 0;
}