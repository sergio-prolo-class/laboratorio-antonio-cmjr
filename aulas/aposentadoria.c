#include <stdio.h>

int main()
{
    // Variáveis
    int idade, tempo;

    // Escreva
    printf("Entre com a idade: ");

    // Leia
    scanf("%d", &idade);

    // Escreva
    printf("Entre com o tempo de serviço: ");

    // Leia
    scanf("%d", &tempo);

    // Se
    if (idade >= 65 || tempo >= 30 || idade >= 60 && tempo >= 25) {
        printf("Pode se aposentar\n");
        // Senão
    } else {
        printf("Não pode se aposentar\n");
        // FimSenão
    }
    // FimSe

    // Fim
    return 0;
}