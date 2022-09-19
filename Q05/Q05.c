#include <stdio.h>

int main(void){
  float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  float *f;
  int i;
  f = vet;
  
  
  for(i = 0 ; i <= 4 ; i++){
    /* Imprime a posição do vetor vet*/
    printf("\nContador: ");
    printf("i = %d\n",i);

    /* Imprime o vetor vet na posição i*/
    printf("Valor: ");
    printf("vet[%d] = %.1f\n",i, vet[i]);

    /* Imprime o valor do ponteiro f, incrementando sua posição com i*/
    printf("Valor: ");
    printf("*(f + %d) = %.1f\n",i, *(f+i));

    /* Imprime o endereço do vetor vet, na posição i, em hexadecimal */
    printf("Endereço: ");
    printf("&vet[%d] = %X\n",i, &vet[i]);

    /* Imprime o endereço de f, incrementando sua posição com i, em hexadecimal */
    printf("Endereço: ");
    printf("(f + %d) = %X\n",i, f+i);
  }
}
