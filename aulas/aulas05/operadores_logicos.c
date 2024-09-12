#include<stdio.h>


int main(){






int p = 0;
int q = 0;



  printf("%i E %i = %i\n", p,q,p && q);
  q = 1;
  printf("%i E %i = %i\n", p,q,p && q);
  p = 1;
  q = 0;

  printf("%i E %i\n",p,q,p && q);
  q = 1;
  printf("%i E  %i = %i\n", p,q,p && q);


  
  int p = 0;
  int q = 0;
  printf("%i OU %i = %i\n", p,q,p || q);
  q = 1;
  printf("%i OU %i = %i\n", p,q,p || q);

  p = 1;
  q = 0;

  printf("%i OU %i\n",p,q,p || q);
  q = 1;
  printf("%i OU %i = %i\n", p,q,p ||   q);


  //nao logico


  p = 0;

  printf("nao %i = %i\n", p,!p);
  printf("nao %i = %i\n", q,!q);

  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
  
  }