#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

float ordenaQsort(const void *a, const void *b){
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
  
  //Chamada da função qsort, coletando tempo antes da chamada, e após a chamada, para medir duração da função
  int tempoi_qsort = clock();
  qsort(valores, size, sizeof(float), ordenaQsort);
  int medicao_qsort = clock() - tempoi_qsort;
  
  //Chamada da função ordena, criada localmente, coletando tempo antes da chamada, e após a chamada, para medir duração da função
  int tempoi_ordena = clock();
  ordenaValores(valores, size, ordena);
  int medicao_ordena = clock() - tempoi_ordena;

  /* Imprimindo comparação */
  printf("\n");
  printf("Duração do qsort: %f\n", ((float)medicao_qsort / CLOCKS_PER_SEC));
  printf("Duração da função criada localmente: %f", ((float)medicao_ordena / CLOCKS_PER_SEC));
  printf("\n");
  
  printf("Conclusão: \n")
  if ((medicao_qsort / CLOCKS_PER_SEC) > (medicao_ordena / CLOCKS_PER_SEC)){
      printf("A função qsort é mais lenta que a função local.");
  } else {
      printf("A função local é mais lenta que a função qsort.");
  }

  // Liberação da memória
  free(valores);
  return 0;
}