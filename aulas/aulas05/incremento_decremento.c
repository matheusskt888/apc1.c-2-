#include <stdio.h>

int main(){




int numero;

  
  printf("entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

  //processamento
  //numero = numero +1


  int incremento = numero;
  incremento++; // ou ++incremento
  int pre_incremento = ++incremento;
  int pos_incremento = incremento++;

  //numero = numero -1
   int decremento = numero;
  decremento--;
  int pre_decremento = --decremento;
  int pos_decremento = decremento--;


  // saida 

  printf("incrementode de %i é %i\n", numero, incremento);
  printf("pre_incremento de %i e %i\n", numero, pre_incremento);
  printf("pos_incremento de %i e %i\n",numero, pos_incremento);
  printf("decrementode de %i é %i\n", numero, decremento);
  printf("pre_decremento de %i e %i\n", numero, pre_decremento);
  printf("pos_decremento de %i e %i\n", numero, pos_decremento);
  




}