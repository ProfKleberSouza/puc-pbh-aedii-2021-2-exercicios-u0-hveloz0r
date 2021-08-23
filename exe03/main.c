#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
    int num;

    /*<----------<ENTRADA DE DADOS>---------->*/
    scanf("%d", &num);

    /*<----------<RESULTADO>---------->*/
    if(num % 2 == 0 && num > 0){
        printf("\nNUMERO PAR POSITIVO");
    }
    else if (num % 2 == 1 && num > 0){
        printf("\nNUMERO IMPAR POSITIVO");
    }
    if(num % 2 == 0 && num < 0){
        printf("\nNUMERO PAR NEGATIVO");
    }
    else if (num < 0){
        printf("\nNUMERO IMPAR NEGATIVO");
    }
    if(num == 0){
        printf("\nNUMERO NEUTRO");
    }
}