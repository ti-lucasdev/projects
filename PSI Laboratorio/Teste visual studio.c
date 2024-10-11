#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    do{
        printf("--------------------------------");
        printf("\nABAIXO ESTA NOSSO CARDAPIO                    \n");
        printf("------------------------------\n");
        printf("1. Gordinha com pneuzinho com tatuagem no bumbum\n");
        printf("2. Gordinha com pneuzinho sem tatuagem\n");
        printf("3. Magrinha de cinturinha fina e tatuagem na coxa\n");
        printf("4. Magrinha de cinturinha fina sem tatuagem estilo panicat\n");
        printf("0. Nao quero nenhuma dessas piranhas\n");
        printf("---------------------------------------\n");
        printf("Digite o numero de sua escolha:\n");
        scanf("%d", &numero);

            switch(numero){
            case 1:
                printf("Voce escolheu a deusa rara de numero %d.\n", numero);
                printf("Gostaria de um gelzinho lubrificante?\n\n\n");
                break;
            case 2:
                printf("Voce escolheu a deusa rara de numero %d.\n", numero);
                printf("Gostaria de um gelzinho lubrificante?\n\n\n");
                break;
            case 3:
                printf("Voce escolheu a deusa rara de numero %d.\n", numero);
                printf("Gostaria de um gelzinho lubrificante?\n\n\n");
                break;
            case 4:
                printf("Voce escolheu a deusa rara de numero %d.\n", numero);
                printf("Gostaria de um gelzinho lubrificante?\n\n\n");
                break;
            case 0:
                printf("Voce nao quer nenhuma dessas piranhas\n\n");
                break;
            default:
                printf("Pare de se enganar, voce e vagabundo, escolha uma rapariga e seja feliz seu arrombado\n\n\n");
                }// termino switch


    }while(numero !=0);
    printf("\n*** OBRIGADO POR ESCOLHER SUA RAPARIGA ***\n\n");

    return 0;
}
