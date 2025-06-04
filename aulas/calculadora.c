#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variáveis
    float x, y, result;
    char sinal;

    // Escreva
    printf("Entre com a operação: ");
    scanf("%f %c %f", &x, &sinal, &y);

    // Switch
    switch (sinal) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y == 0.0) {
                printf("Errou!\n");
                return EXIT_FAILURE;
            }
            result = x / y;
            break;
        default:
            printf("Operação inválida\n");
            return EXIT_FAILURE;
    }

    printf("Resultado: %g\n", result);
    return EXIT_SUCCESS;
}