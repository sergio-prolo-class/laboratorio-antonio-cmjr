#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
#define tau (2 * PI)
#define r_terra 6371.0

float gra_rad(float gra)
{
    return gra * tau / 360.0;
}

float hav(float the)
{
    return sin(the / 2.0) * sin(the / 2.0);
}

float d_terra(float lat1, float lon1, float lat2, float lon2)
{
    float a, d;
    lat1 = gra_rad(lat1);
    lon1 = gra_rad(lon1);
    lat2 = gra_rad(lat2);
    lon2 = gra_rad(lon2);
    a = hav(lat2 - lat1) + cos(lat1) * cos(lat2) * hav(lon2 - lon1);
    d = 2.0 * r_terra * asin(sqrt(a));
    return d;
}

int main()
{
    float lat1, lon1, lat2, lon2, d;
    printf("Entre com lat lon do ponto 1: ");
    scanf("%f %f", &lat1, &lon1);
    printf("Entre com lat lon do ponto 2: ");
    scanf("%f %f", &lat2, &lon2);
    d = d_terra(lat1, lon1, lat2, lon2);
    printf("Distância entre os pontos: %.2f km\n", d);

    return 0;
}