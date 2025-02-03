#include <stdio.h>
#include <stdlib.h>

#define BISPO_MAX 5
#define TORRE_MAX 5
#define RAINHA_MAX 8

void movimentacao_bispo(int bispo){
    if(bispo < BISPO_MAX){
        printf("O bispo %d casas na diganol superior direita\n", bispo);
    }else{
        printf("O bispo nao pode andar $d casas\n", bispo);
        prinft("Digite o numero de casas que o dispo pode andar: ");
        scanf("%d", bispo);
        movimentacao_bispo(bispo);
    }
}

void movimentacao_rainha(int rainha){
        if(rainha < RAINHA_MAX){
        printf("A Rainha %d casas na diganol superior direita\n", rainha);
    }else{
        printf("A rainha nao pode andar $d casas\n", rainha);
        prinft("Digite o numero de casas que o dispo pode andar: ");
        scanf("%d", rainha);
        movimentacao_bispo(rainha);
    }
}

void movimentacao_torre(int torre){
        if(torre < TORRE_MAX){
        printf("A torre %d casas na diganol superior direita\n", torre);
    }else{
        printf("A torre nao pode andar $d casas\n", torre);
        prinft("Digite o numero de casas que o dispo pode andar: ");
        scanf("%d", torre);
        movimentacao_bispo(torre);
    }
}

void movimentacao_cavalo(int cavalo){
    for(int i = 0; i < 1; i++){
        int j = 0;
        while(j < 1){
            printf("O cavalo se movimentou em L para cima e para direita\n");
            j++;
        }
    }
}

void movimentacao(){
    int bispo, torre, rainha, cavalo;

    printf("Digite o numero de casas que o bispo pode andar: ");
    scanf("%d", &bispo);
    movimentacao_bispo(bispo);

    printf("Digite o numero de casas que a rainha pode andar: ");
    scanf("%d", &rainha);
    movimentacao_rainha(rainha);

    printf("Digite o numero de casas que o torre pode andar: ");
    scanf("%d", &torre);
    movimentacao_torre(torre);

    printf("Digite o numero de casas que o torre pode andar: ");
    scanf("%d", &cavalo);
    movimentacao_cavalo(cavalo);

    // while(1){
    //     printf("Digite o numero de casas que o bispo pode andar: ");
    //     scanf("%d", &bispo);
    //     if(bispo <= BISPO_MAX){
    //         printf("O bispo andou %d casas na diagonal superior direita\n", bispo);
    //         break;
    //     }else if(bispo > BISPO_MAX){
    //         printf("O bispo nao pode andar %d casas\n", bispo);
    //     }else{
    //         printf("valor invalido\n");
    //     }
    // }
    
    // while(1){
	// 	printf("Digite o numero de casas que a rainha pode andar: ");
    //     scanf("%d", &rainha);
    //     if(rainha <= RAINHA_MAX){
    //         printf("A rainha andou %d casas para a esquerda\n", rainha);
    //         break;
    //     }else if (rainha > RAINHA_MAX){
    //         printf("A rainha nao pode andar %d casas\n", rainha);
    //     }else{
    //         printf("valor invalido\n");
    //     }
	// }
	
	// while(1){
	// 	printf("Digite o numero de casas que o torre pode andar: ");
    //     scanf("%d", &torre);
    //     if(torre <= TORRE_MAX){
    //         printf("A torre andou %d casas na direita\n", torre);
    //         break;
    //     }else if (torre > TORRE_MAX){
    //         printf("A torre nao pode andar %d casas\n", torre);
    //     }else{
    //         printf("valor invalido\n");
    //     }
	// }

    // for(int i = 0; i < 1; i++){
    //     int j = 0;
    //     while(j < 1){
    //         printf("O cavalo se movimentou em L para baixo e para a esquerda");
    //         j++;
    //     }
    // }
}

int main(int argc, char** argcv){
	
	movimentacao();
	return 0;
}
