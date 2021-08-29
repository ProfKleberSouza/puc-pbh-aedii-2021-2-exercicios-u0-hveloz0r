#include <stdio.h>

int main (void) {
    /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
    int N_numero, maior=0, menor, i, cont;
    scanf("%i", &N_numero);
    
    menor = i;

    /*<----------<ENTRADA DE DADOS>---------->*/
    for(i=0; i<N_numero; i++) {
        scanf("%i", &cont);
        if(cont>maior){
            maior=cont;
        }
        else if(cont<menor){
                menor=cont;
        }
    }
    
    /*<----------<RESULTADO>---------->*/
    printf("\nMENOR = %i", menor);
    printf("\nMAIOR = %i", maior);
}