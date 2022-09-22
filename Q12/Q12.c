#include <stdio.h>

/* Um ponteiro para função consiste em uma variável que é declarada com o intuito de apontar para funções presente no código, permitindo a chamada de funções utilizando apenas o nome do ponteiro, como também passar a função como parâmetro de outras funções. */

int soma(int a, int b){
  return a + b;
}

int main(){
  int a, b;
  int (*pont)(int, int);
  
  printf("Insira dois números para soma: ");
  scanf("%d %d", &a, &b);
  pont = soma;

  int soma;
  soma = pont(a, b);
  printf("A soma é igual a: %d\n", soma);
  return 0;
}