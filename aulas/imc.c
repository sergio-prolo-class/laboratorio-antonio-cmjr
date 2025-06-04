#include <stdio.h>

int main()
{
    // Variáveis
    float peso, altura, imc;

    // Escreva
    printf("Entre com o peso (kg): ");

    // Leia
    scanf("%f", &peso);

    // Escreva
    printf("Entre com a altura (m): ");

    // Leia
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f kg/m²\n", imc);

    // Escreva
    printf("Classificação: ");

    // Se
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
        // SenãoSe
    } else if (imc < 25.0) {
        printf("Peso normal\n");
        // SenãoSe
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
        // SenãoSe
    } else if (imc < 35.0) {
        printf("Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Obesidade grau II\n");
        // Senão
    } else {
        printf("Obesidade grau III, Obesidade mórbida\n");
    }
    // FimSenão

    // Fim
    return 0;
}