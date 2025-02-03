#include <stdio.h>
#include <stdlib.h>

#define BISPO_MAX 5
#define TORRE_MAX 5
#define RAINHA_MAX 8


void movimentacao(){
    int bispo; //casas para a diagonal superior direita
    int torre; //casas para a direita
    int rainha; //casas para a esquerda

    while(1){
        printf("Digite o numero de casas que o bispo pode andar: ");
        scanf("%d", &bispo);
        if(bispo <= BISPO_MAX){
            printf("O bispo andou %d casas na diagonal superior direita\n", bispo);
            break;
        }else if(bispo > BISPO_MAX){
            printf("O bispo nao pode andar %d casas\n", bispo);
        }else{
            printf("valor invalido\n");
        }
    }
    
    while(1){
		printf("Digite o numero de casas que a rainha pode andar: ");
        scanf("%d", &rainha);
        if(rainha <= RAINHA_MAX){
            printf("A rainha andou %d casas para a esquerda\n", rainha);
            break;
        }else if (rainha > RAINHA_MAX){
            printf("A rainha nao pode andar %d casas\n", rainha);
        }else{
            printf("valor invalido\n");
        }
	}
	
	while(1){
		printf("Digite o numero de casas que o torre pode andar: ");
        scanf("%d", &torre);
        if(torre <= TORRE_MAX){
            printf("A torre andou %d casas na direita\n", torre);
            break;
        }else if (torre > TORRE_MAX){
            printf("A torre nao pode andar %d casas\n", torre);
        }else{
            printf("valor invalido\n");
        }
	}
}

int main(int argc, char** argcv){

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

	
	movimentacao();
	return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

