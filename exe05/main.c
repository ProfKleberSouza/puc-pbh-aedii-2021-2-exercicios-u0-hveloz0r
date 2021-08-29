#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
    int notas[4], i=0, soma=0;
    float media;
    /*<----------<ENTRADA DE DADOS>---------->*/
    for(i=0; i < 4; i++){
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    
    /*<----------<OPERACAO>---------->*/
    media = (float)soma/i;

    /*<----------<RESULTADO>---------->*/
    if(media >= 6.5){
        printf("NOTA = %.1f (APROVADO)", media);
    }
    else{
        printf("NOTA = %.1f (REPROVADO)", media);
    }
}