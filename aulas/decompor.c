#include <stdio.h>
#include <stdlib.h>

char decompor(
    float x,
    int *parte_int,
    float *parte_frac);
{
    char sinal;
    if (x > 0) {
        sinal = '+';
    } else if (x < 0) {
        sinal = '-';
    } else {
        sinal = ' ';
    }
    *parte_int = x - (int)x;
    *parte_frac = (int)x;
    return sinal;
}

parte_frac = x - (int)x;
}

int main()
{
    float número, parte_frac;
    int parte_int;
    printf("Entre com um número real: ");
    scanf("%f", &número);
    char sinal = decompor(número, &parte_int, &parte_frac);

    printf("Sinal: %c\n", sinal);
    printf("Parte inteira: %d\n", parte_inf);
    printf("Parte fracionária: %f\n", parte_frac);
    return EXIT_SUCCESS;
}
