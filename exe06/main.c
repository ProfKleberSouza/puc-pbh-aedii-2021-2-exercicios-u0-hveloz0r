#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
    int l1, l2, l3;

    /*<----------<ENTRADA DE DADOS>---------->*/
    scanf("%d", &l1);
    scanf("%d", &l2);
    scanf("%d", &l3);
    
    /*<----------<RESULTADO>---------->*/
    if ((l1 == 0 || l2 == 0 || l3 == 0 ) || (l1+l2<l3 || l1+l3<l2 || l2+l3<l1)){
        printf("OS LADOS NAO FORMAM UM TRIANGULO\n");
    }
    else if (l1 == l2 && l2 == l3){
        printf("TRIANGULO EQUILATERO");
    }
    else if(l1 == l2 || l1 == l3 || l2 == l3){
        printf("TRIANGULO ISOCELES");
    }
    else
    {
        printf("TRIANGULO ESCALENO");
    }
}