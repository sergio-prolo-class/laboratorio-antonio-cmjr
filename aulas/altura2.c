#include <stdio.h>
#include <math.h>

#define pol_pe 12
#define cm_pol 2.54

int main()
{
    int pes, pol;
    float metros;

    printf("Entre com sua altura em metros: ");
    scanf("%f", &metros);

    pol = round(100.0 * metros / cm_pol);
    pes = pol / pol_pe;
    pol = pol % pol_pe;

    printf("Altura em pés + polegadas: %d'%d\"\n", pes, pol);

    return 0;
}