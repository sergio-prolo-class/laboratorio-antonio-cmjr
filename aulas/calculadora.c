#include <stdio.h>

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
                return 1;
            }
            result = x / y;
            break;
        default:
            printf("Operação inválida\n");
            return 1;
    }

    printf("Resultado: %g\n", result);
    return 0;
}