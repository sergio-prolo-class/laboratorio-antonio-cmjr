#include <stdio.h>

int main()
{
    // Variáveis
    int n;

    // Escreva
    printf("Entre com um número inteiro: ");

    // Leia
    scanf("%d", &n);

    // Se
    if (n > 0) {
        printf("Positivo\n");
        // SenãoSe
    } else if (n < 0) {
        printf("Negativo\n");
        // Senão
    } else {
        printf("Zero\n");
    }
    // FimSenão

    // Fim
    return 0;
}