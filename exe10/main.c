#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (void) {

    /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
    int vetor[10], i=0;
    
    /*<----------<ENTRADA DE DADOS>---------->*/
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }    
    for(i = 9; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }

    /*<----------<RESULTADO>---------->*/
}