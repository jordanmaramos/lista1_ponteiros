#include <stdio.h>
#include <stdlib.h>

//Função que ordena valores
void ordenaValores(float *p, int size, int (*ordena)(const void *a, const void *b)){
  float aux;
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
      if ((ordena(&p[i], &p[j])) < 0){
        aux = p[i];
        p[i] = p[j];
        p[j] = aux;
      }
    }
  }
  //Imprime valores do array ordenado
  for (int i = 0; i < size; i++){
    printf("%.1f ", p[i]);
  }
}

float ordena(const void *a, const void *b){
  return (*(float *)a - *(float *)b);
}

int main(){
  float *valores;
  int size;

  //Coleta o tamanho do array
  printf("Insira o tamanho do array: ");
  scanf("%d", &size);

  //Alocação dinâmica do array
  valores = malloc(size * sizeof(float));

  //Coleta array do usuário
  for (int i = 0; i < size; i++){
    printf("Array de 0 a %d. Insira o %dº valor float: ", size-1, i+1);
    scanf("%f", &valores[i]);
  }

  //Função qsort criada localmente
  ordenaValores(valores, size, ordena);

  // Liberação da memória
  free(valores);
  return 0;
}