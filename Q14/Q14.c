#include <stdio.h>
#include <stdlib.h>

// Função que compara dois números
int ordenaValores(const void *a, const void *b){
  return (*(float *)a - *(float *)b);
}

int main(){
  float *valores;
  int size;

  //Coleta o tamanho do array
  printf("Digite o tamanho do array: ");
  scanf("%d", &size);

  //Alocação dinâmica do array
  valores = malloc(size * sizeof(float));

  //Coleta array do usuário
  for (int i = 0; i < size; i++){
    printf("Array de 0 a %d. Insira o %dº valor float: ", size-1, i+1);
    scanf("%f", &valores[i]);
  }

  //Função qsort(array, tamanho do array, tamanho em bytes do tipo de variavel, ponteiro para função de ordenação)
  qsort(valores, size, sizeof(float), ordenaValores);

  // Laço para imprimir array ordenado
  for (int i = 0; i < size; i++){
    printf("%.1f ", valores[i]);
  }

  // Liberação da memória
  free(valores);
  return 0;
}