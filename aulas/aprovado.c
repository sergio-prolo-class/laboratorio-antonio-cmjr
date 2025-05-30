#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // Variáveis
    float p11, p12, r1, p2, r2, freq;
    float av1, av2, media;
    int conceito;
    bool aprovado;

    // Início
    printf("Entre com P1.1, P1.2 e R1: ");
    scanf("%f %f %f", &p11, &p12, &r1);

    printf("Entre com P2 e R2: ");
    scanf("%f %f", &p2, &r2);

    printf("Entre com a frequência (em %%): ");
    scanf("%f", &freq);

    av1 = fmax(p11 + p12, r1);
    av2 = fmax(p2, r2);
    media = (av1 + av2) / 2.0;
    conceito = round(media);
    aprovado = conceito >= 6 && freq >= 75.0;

    printf("Média: %.1f\n", media);
    printf("Conceito final: %d\n", conceito);
    printf("Aprovado: %d\n", aprovado);

    // Fim
    return 0;
}