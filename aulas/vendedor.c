#include <stdio.h>

#define SALARIO_FIXO 2000.0
#define META 10000.0
#define BONUS 500.0

int main()
{
    // Variáveis
    int avaliacao;
    float vendas, remuneracao;

    // Escreva
    printf("Entre com o total de vendas (R$): ");

    // Leia
    scanf("%f", &vendas);

    // Escreva
    printf("Entre com a avaliação de desempenho (1-10): ");

    // Leia
    scanf("%d", &avaliacao);
    remuneracao = SALARIO_FIXO;

    // Se
    if (vendas >= META) {
        remuneracao += vendas * 0.07;
        // Senão
    } else {
        remuneracao += vendas * 0.05;
        // FimSenão
    }
    // FimSe

    // Se
    if (avaliacao >= 8) {
        remuneracao += BONUS;
    }
    // FimSe

    printf("Remuneração: R$ %.2f\n", remuneracao);

    // Fim
    return 0;
}