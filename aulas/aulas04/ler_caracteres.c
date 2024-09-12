#include<stdio.h>


int main(){

char tecla = '\0';


  printf("digite uma tcla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();
  printf("voce digitou: %c\n", tecla);

  printf("digitou outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("voce digitou: %c\n", tecla);



  char nome[31];
  printf("digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("ola %s\n", nome);





  return 0;
}