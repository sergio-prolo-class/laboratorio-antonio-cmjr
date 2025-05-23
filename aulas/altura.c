#include <stdio.h>

#define pol_pe 12
#define cm_pol 2.54

int main()
{
    // Variáveis
    int pes, pol;
    float metros;

    // Início
    printf("Entre com sua altura em pés + polegadas (ex: 5 10): ");
    scanf("%d %d", &pes, &pol);

    pol = pes * pol_pe + pol;
    metros = pol * cm_pol / 100.0;

    printf("Altura em metros: %.2f\n", metros);

    // Fim
    return 0;
}