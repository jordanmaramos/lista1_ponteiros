#include <stdio.h>
#include <stdlib.h>

/* Função que aloca dinamicamente a matriz de acordo com número de linhas e colunas*/
float **alocaMatriz(int nl, int nc){
  float **matriz = malloc(nl * sizeof(float *));

  matriz[0] = malloc(nl * nc * sizeof(float));

  for (int i = 1; i < nl; i++){
    matriz[i] = matriz[i - 1] + nc;
  }

  return matriz;
}

void multiplicaMatriz(float **m1, float **m2, float **m3, int nlA, int ncA, int ncB){
  int soma = 0;
  
  //Multiplicando matriz
  for(int i = 0; i < nlA; i++){
    for(int j = 0; j < ncB; j++){
      for(int k = 0; k < ncA; k++){                
        soma += m1[i][k] * m2[k][j];
      }
      m3[i][j] = soma;
      soma = 0;
    }
  }
}

void imprimeMatriz(float **m, int nl, int nc){
  for (int i = 0; i < nl; i++){
    for (int j = 0; j < nc; j++){
      printf("%.1f ", m[i][j]);
    }
    printf("\n");  
  }
  printf("\n");
}

int main(){
  int n1, n2, n3;
  float **m1, **m2, **m3;

  printf("Número de linhas de A: ");
  scanf("%d", &n1);

  printf("Número de colunas de A = Número de linhas de B: ");
  scanf("%d", &n2);

  printf("Número de colunas de B: ");
  scanf("%d", &n3);

  //Matriz 1
  m1 = alocaMatriz(n1, n2);
  //Matriz 2
  m2 = alocaMatriz(n2, n3);
  //Matriz resposta da multiplicação
  m3 = alocaMatriz(n2, n2);

  //Preenchendo matriz 1 automaticamente
  for (int i = 0; i < n1; i++){
    for (int j = 0; j < n2; j++){
      m1[i][j] = rand() % 5;
    }
  }

  //Preenchendo matriz 2 automaticamente
  for (int i = 0; i < n2; i++){
    for (int j = 0; j < n3; j++){
      m2[i][j] = rand() % 5;
    }
  }

  multiplicaMatriz(m1, m2, m3, n1, n2, n3);

  printf("Matriz 1: \n");
  imprimeMatriz(m1, n1, n2);
  
  printf("Matriz 2: \n");
  imprimeMatriz(m2, n2, n3);
  
  printf("Matriz resultado: \n");
  imprimeMatriz(m3, n2, n2);

  free(m1);
  free(m2);
  free(m3);
  
  return 0;
}