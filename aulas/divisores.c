#include <stdio.h>

int n, n_divisores;

int main()
{
    printf("Entre com um inteiro positivo: ");
    scanf("%d", &n);

    printf("Divisores: [1");
    int n_divisores = 1;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            n_divisores++;
            printf(" , %d", i);
        }
    }
    printf("]\n");

    printf("%s", (n_divisores == 2) ? "É primo" : "Não é primo");
    return 0;
}