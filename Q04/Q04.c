#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  /* Será impresso valor = 20, uma vez que o ponteiro p1 recebeu o endereço de valor, 
  e foi alterado o valor do ponteiro */
  printf("%d \n\n", valor); 

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  /* Será impresso temp = 29.0, uma vez que o ponteiro p2 recebeu o endereço de temp, 
  e foi alterado o valor do ponteiro */
  printf("%.1f \n\n", temp);

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  /* Será impresso aux = P, uma vez que o ponteiro p3 recebeu o endereço de nome, 
  na posição 0, e foi passado o valor do ponteiro para aux */
  printf("%c \n\n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  /* Será impresso aux = e, uma vez que o ponteiro p3 recebeu o endereço de nome, 
  na posição 4, e foi passado o valor do ponteiro para aux */
  printf("%c \n\n", aux);

  /* (e) */
  p3 = nome;
  /* Será impresso *p3 = P, uma vez que o ponteiro p3 recebeu o endereço de nome
  sem index, ou seja, no primeiro endereço da variável - na posição 0 */
  printf("%c \n\n", *p3);
  
  /* (f) */
  p3 = p3 + 4;
  /* Será impresso *p3 = e, uma vez que o ponteiro p3 recebeu o próprio endereço
  + 4 posições, ou seja, o primeiro endereço da variável nome + 4 - na posição 4 */
  printf("%c \n\n", *p3);

    /* (g) */
  p3--;
  /* Será impresso *p3 = t, uma vez que o ponteiro p3 está sendo decrementado
  sua posição vai de 4 para 3 */
  printf("%c \n\n", *p3);
  
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  /* Será impresso idade = 31, uma vez que o ponteiro p4 está apontando para vetor[0], uma
  vez que não recebe nenhum index */
  printf("%d \n\n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  /* Será impresso idade = 45, uma vez que o ponteiro p4 está apontando para vetor[0]. Ao
  executar p5 = p4+1, p5 recebe endereço de vetor[1], cujo valor é 45 */
  printf("%d \n\n", idade);
  
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  /* Será impresso idade = 27, uma vez que o ponteiro p5 está apontando para vetor[1]. Ao
  executar p4 = p5+1, p4 altera seu endereço para vetor[2], cujo valor é 27 */
  printf("%d \n\n", idade);
  
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  /* Será impresso idade = 31, uma vez que o ponteiro p4 está apontando para vetor[2]. Ao
  executar p4 = p4-2, p4 recebe altera seu endereço para vetor[0], cujo valor é 31 */
  printf("%d \n\n", idade);

 /* (m) */
  p5 = &vetor[2] - 1;
  /* Será impresso *p5 = 45, uma vez que recebe o endereço de vetor[2] - 1, ou seja,
  vetor[1], cujo valor é 45 */
  printf("%d \n\n", *p5);

  /* (n) */
  p5++;
  /* Será impresso *p5 = 27, uma vez que p5 aponta para vetor[2] e é decrementado em uma posição. */
  printf("%d \n\n", *p5);
  
  return 0;
}