#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero, n;

int main()
{
    srand(time(NULL));
    int n = rand() % 101;
    do {
        (rand() % 101);
    } while (n >= numero);
    printf("Entre com seu palpite: ");
    scanf("%d", &numero);

    return 0;
}