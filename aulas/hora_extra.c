#include <stdio.h>

int main()
{
    // Variáveis
    float horas, pagamento;

    // Escreva
    printf("Entre com as horas trabalhadas: ");

    // Leia
    scanf("%f", &horas);
    pagamento = 50.0 * horas;

    // Se então
    if (horas > 8.0) {
        pagamento += 25 * (horas - 8.0);
    }  // FimSe

    // Escreva
    printf("Pagamento: R$ %.2f/n", pagamento);

    // Fim
    return 0;
}