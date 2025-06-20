#include <stdio.h>
#include <math.h>

typedef struct {
    float lado1, lado2, angulo;
} Paralelogramo;

int main()
{
    Paralelogramo medidas;
    float area, perimetro;

    printf("Entre com os lados: \n");
    scanf("%f %f", &medidas.lado1, &medidas.lado2);

    printf("Entre com o ângulo (graus): \n");
    scanf("%f", &medidas.angulo);

    perimetro = 2 * (medidas.lado1 + medidas.lado2);
    printf("Perimetro %.2f\n", perimetro);

    area = medidas.lado1 * medidas.lado2 * sin(medidas.angulo * 3.1415 / 180);
    printf("Area %.2f\n", area);

    return 0;
}
