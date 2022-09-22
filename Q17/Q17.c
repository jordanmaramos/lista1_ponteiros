#include <stdio.h>

void concatenaSomaVetor(int *v1, int *v2, int *v3, int size){
  //Soma vetor 1 e 2 e direciona resultado para vetor 3
  for (int i = 0; i < size; i++){
    v3[i] = v1[i] + v2[i];
  }

  //Imprime realização da soma
  for (int i = 0; i < size; i++){
    printf("%d + %d = %d \n", v1[i], v2[i], v3[i]);
  }

  //Imprime vetor com colchetes
  printf("[ ");
  for (int i = 0; i < size; i++){
    printf("%d ", v3[i]);
  }
  printf("]");
}

int main(){
  int size;
  int *vet1, *vet2, *vet3;

  //Coleta tamanho dos 3 vetores
  printf("Insira o tamanho dos vetores: ");
  scanf("%d", &size);

  //Aloca vetores dinamicamente
  vet1 = malloc(size * sizeof(int));
  vet2 = malloc(size * sizeof(int));
  vet3 = malloc(size * sizeof(int));

  //Coleta vetor 1 do usuário
  for (int i = 0; i < size; i++){
    printf("Vetor 1 de 0 a %d. Insira o %dº valor: ", size-1, i+1);
    scanf("%d", &vet1[i]);
  }

  printf("\n");
  
  //Coleta vetor 2 do usuário
  for (int i = 0; i < size; i++){
    printf("Vetor 2 de 0 a %d. Insira o %dº valor: ", size-1, i+1);
    scanf("%d", &vet2[i]);
  }

  concatenaSomaVetor(vet1, vet2, vet3, size);
  return 0;
}