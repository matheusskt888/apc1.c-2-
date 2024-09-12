#include<stdio.h>


int main(){

  float nota = 0.0f;


 printf("entre com uma nota entre 0 e 10: ");
  int deu_certo = scanf("%f", &nota);

  printf("voce digitou: %.1f\n", nota);


  double pi = 0.0;
  printf("entre com o valor de pi: ");
  deu_certo = scanf("%lf", &pi);

  printf("voce digitou: %.9f\n", pi);

















return 0;
}