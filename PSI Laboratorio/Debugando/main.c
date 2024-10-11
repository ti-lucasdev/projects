#include <stdio.h>
#include <stdlib.h>

int main(){
    float KMapp;
    float Media;
    float VC;
    float UB;
    float NN;
    float VL;

    printf("Digite o total feito pela UBER:\n\n\a");
    scanf("%f", &UB);

    printf("Digite o total feito pela 99:\n\n\a");
    scanf("%f", &NN);

    printf("Digite o KM rodado pelos aplicativos:\n\n\a");
    scanf("%f", &KMapp);

    printf("Digite a media que o carro fez rodados nos aplicativos:\n\n\a");
    scanf("%f", &Media);

    printf("Digite o valor pago pelo litro do combustivel:\n\n\a");
    scanf("%f", &VC);

    VL = (NN + UB) - ((KMapp / Media)*VC);

   if (VL < 0) {
        printf("Voce obteve um prejuízo de: %.2f\n\n", VL);
    } else {
        printf("O seu lucro liquido no dia foi de: %.2f\n\n", VL);
    }

    return 0;
}
