#include <stdio.h>
#include <stdlib.h>


void ordenaValores(float *p, int size){
  float aux;
  //Altera um a um caso não esteja na ordem
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      if (p[i] < p[j]){
        aux = p[i];
        p[i] = p[j];
        p[j] = aux;
      }
    }
  }
  //Imprime array ordenado
  for (int i = 0; i < size; i++){
    printf("%.1f ", p[i]);
  }
}

int main(){
  float *valores;
  int size;

  //Coleta tamanho do array
  printf("Insira o tamanho do array: ");
  scanf("%d", &size);

  //Alocação dinâmica do vetor, de acordo com o tamanho requerido pelo usuário
  valores = malloc(size * sizeof(float));

  //Coleta array do usuário
  for (int i = 0; i < size; i++){
    printf("Array de 0 a %d. Insira o %dº valor float: ", size-1, i+1);
    scanf("%f", &valores[i]);
  }

  //Chamada de função que ordena valores
  ordenaValores(valores, size);
  free(valores);
  return 0;
}