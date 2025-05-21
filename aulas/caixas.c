#include <stdio.h>

int main()
{
    float altura, largura, profundidade;

    printf("Entre com a altura (m): ");
    scanf("%f", &altura);

    printf("Entre com a largura (m): ");
    scanf("%f", &largura);

    printf("Entre com a profundidade (m): ");
    scanf("%f", &profundidade);

    float area, volume;
    area = 2 * largura * profundidade + 2 * largura * altura + 2 * altura * largura;
    volume = largura * profundidade * altura;

    printf("A área é %.2f m² e o volume é %.3f m³\n", area, volume);
}