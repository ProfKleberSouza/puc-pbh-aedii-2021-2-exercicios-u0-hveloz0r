#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
    int Rendimento = 0, Velocidade= 0, Tempo = 0, Distancia = 0, Litros= 0;
    
    /*<----------<ENTRADA DE DADOS>---------->*/
    printf("\nInforme o rendimento do veiculo: ");
    scanf("%d", &Rendimento);
    
    printf("\nInforme a velocidade media: ");
    scanf("%d", &Velocidade);

    printf("\nInforme o valor tempo da viagem: ");
    scanf("%d", &Tempo);

    /*<----------<RESULTADO>---------->*/
    printf("\nR = %d", Rendimento);    
    printf("\nV = %d", Velocidade);
    printf("\nT = %d", Tempo);
    printf("\nD = %d", Distancia = Tempo * Velocidade);
    printf("\nL = %d", Litros = Distancia / Rendimento);
    
}