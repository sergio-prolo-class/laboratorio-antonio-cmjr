#include <stdio.h>

int main()
{
    int numero, soma, digito;
    printf("Entre com um inteiro não-negativo: ");
    scanf("%d", &numero);
    while (numero > 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    printf("Soma dos digitos: %d\n", soma);
    return 0;
}
