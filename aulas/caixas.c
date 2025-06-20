#include <stdio.h>

int main()
{
    float alt, lar, prof;
    float area, vol;
    int num_caixas;
    float custo_m2, custo_total;

    printf("Entre com a altura (m): ");
    scanf("%f", &alt);  // Leia a altura

    printf("Entre com a largura (m): ");
    scanf("%f", &lar);  // Leia a largura

    printf("Entre com a profundidade (m): ");
    scanf("%f", &prof);  // Leia a profundidade

    area = 2 * (lar * prof + lar * alt + alt * lar);
    vol = lar * prof * alt;

    printf("A área é %g m² e o volume é %g m³\n", area, vol);  // Escreva o volume e área

    printf("Entre com a quantidade de caixas: ");
    scanf("%d", &num_caixas);  // Leia o número de caixas

    printf("Entre com o custo do m² (R$): ");
    scanf("%f", &custo_m2);  // Leia o custo por m²

    custo_total = num_caixas * area * custo_m2;
    printf("Custo total: R$ %.2f\n", custo_total);  // Escreva o custo total

    return 0;
}