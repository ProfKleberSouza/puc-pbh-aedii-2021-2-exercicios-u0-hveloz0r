#include <stdio.h>

int main() {

  /*<----------<DEFINICAO DE VARIAVEIS>---------->*/
  int a, b, c;
  
  /*<----------<ENTRADA DE DADOS>---------->*/
  scanf("%d%d%d", &a, &b, &c);

  /*<----------<RESULTADO>---------->*/
  if ((a < b) && (a < c)){
    printf("MENOR = %d\n", a);
  }
  if ((b < a) && (b < c)){
    printf("MENOR = %d\n", b);
  }
  if ((c < a) && (c < b)){
    printf("MENOR = %d", c);
  }
  if ((a > b) && (a > c)){
    printf("MAIOR = %d\n", a);
  }
  if ((b > a) && (b > c)){
    printf("MAIOR = %d\n", b);
  }
  else if ((c > a) && (c > b)){
    printf("MAIOR = %d", c);
  }
}